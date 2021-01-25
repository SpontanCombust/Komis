#include "vehicle_technical_data.hpp"

std::string vehicleFuelToStringPolish( EVehicleFuel vehicleFuel ) 
{
    switch( vehicleFuel )
    {
        case EVehicleFuel::GASOLINE:    return "Benzyna";
        case EVehicleFuel::DIESEL:      return "Diesel";
        case EVehicleFuel::LPG:         return "LPG";
        case EVehicleFuel::ELECTRICITY: return "Elektryk";

        default: return "ERROR";
    }
}

const std::vector< EVehicleFuel > getPossibleVehicleFuels()
{
    return {    
        EVehicleFuel::GASOLINE,
        EVehicleFuel::DIESEL,                
        EVehicleFuel::LPG,
        EVehicleFuel::ELECTRICITY 
    };
}


std::string vehicleTransmissionToStringPolish( EVehicleTransmission vehicleTransmission ) 
{
    switch( vehicleTransmission )
    {
        case EVehicleTransmission::MANUAL:      return "Manualna";
        case EVehicleTransmission::AUTOMATIC:   return "Automatyczna";

        default: return "ERROR";    
    }
}

const std::vector< EVehicleTransmission > getPossibleVehicleTransmissions()
{
    return {
        EVehicleTransmission::MANUAL,
        EVehicleTransmission::AUTOMATIC
    };
}


std::string vehicleWheelDriveToStringPolish( EVehicleWheelDrive wheelDrive ) 
{
    switch( wheelDrive )
    {
        case EVehicleWheelDrive::FRONT:     return "Na przednie koła";
        case EVehicleWheelDrive::REAR:      return "Na tylnie koła";
        case EVehicleWheelDrive::ALL:       return "4x4";

        default: return "ERROR";
    }
}

const std::vector< EVehicleWheelDrive > getPossibleVehicleWheelDrives()
{
    return {
        EVehicleWheelDrive::REAR,
        EVehicleWheelDrive::FRONT,
        EVehicleWheelDrive::ALL
    };
}


std::string vehicleDoorQuantityToStringPolish( EVehicleDoorQuantity doorQuantity ) 
{
    switch ( doorQuantity )
    {
        case EVehicleDoorQuantity::NONE:    return "Brak";
        case EVehicleDoorQuantity::THREE:   return "Troje";
        case EVehicleDoorQuantity::FIVE:    return "Pięcioro";
        case EVehicleDoorQuantity::OTHER:   return "Inne";

        default: return "ERROR";
    }
}

const std::vector< EVehicleDoorQuantity > getPossibleVehicleDoorQuantities()
{
    return {
        EVehicleDoorQuantity::NONE,
        EVehicleDoorQuantity::THREE,
        EVehicleDoorQuantity::FIVE,
        EVehicleDoorQuantity::OTHER
    };
}



void writeVehicleTechnicalDataToStream( std::ostream& out, const SVehicleTechnicalData& data ) 
{
    out << static_cast<int>( data.fuelType ) << '\0'
        << static_cast<int>( data.transmissionType ) << '\0'
        << static_cast<int>( data.wheelDriveType ) << '\0'
        << data.engineHorsepower << '\0'
        << data.engineCapacityL << '\0'
        << static_cast<int>( data.doorQuantity ) << '\0';
}

bool readVehicleTechnicalDataFromStream( std::istream& in, SVehicleTechnicalData& data ) 
{
    int tmpInt;
    std::string line;

    try
    {
        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.fuelType = static_cast< EVehicleFuel >( tmpInt );

        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.transmissionType = static_cast< EVehicleTransmission >( tmpInt );

        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.wheelDriveType = static_cast< EVehicleWheelDrive >( tmpInt );

        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.engineHorsepower = ( unsigned int )tmpInt;

        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.engineCapacityL = ( unsigned int )tmpInt;

        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.doorQuantity = static_cast< EVehicleDoorQuantity >( tmpInt );
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }

    return true;
}
