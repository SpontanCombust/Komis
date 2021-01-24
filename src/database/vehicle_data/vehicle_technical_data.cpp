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

std::ostream& operator<<( std::ostream& out, const SVehicleTechnicalData& vehicleTechnicalData ) 
{
    out << static_cast<int>( vehicleTechnicalData.fuelType ) << '\n'
        << static_cast<int>( vehicleTechnicalData.transmissionType ) << '\n'
        << static_cast<int>( vehicleTechnicalData.wheelDriveType ) << '\n'
        << vehicleTechnicalData.engineHorsepower << '\n'
        << vehicleTechnicalData.engineCapacityL << '\n'
        << static_cast<int>( vehicleTechnicalData.doorQuantity ) << std::endl;

    return out;
}

std::istream& operator>>( std::istream& in, SVehicleTechnicalData& vehicleTechnicalData ) 
{
    int tmpEnumInt;

    in  >> tmpEnumInt;
    vehicleTechnicalData.fuelType = static_cast<EVehicleFuel>( tmpEnumInt );
    in  >> tmpEnumInt;
    vehicleTechnicalData.transmissionType = static_cast<EVehicleTransmission>( tmpEnumInt );
    in  >> tmpEnumInt;
    vehicleTechnicalData.wheelDriveType = static_cast<EVehicleWheelDrive>( tmpEnumInt );
    in  >> vehicleTechnicalData.engineHorsepower
        >> vehicleTechnicalData.engineCapacityL
        >> tmpEnumInt;
    vehicleTechnicalData.doorQuantity = static_cast<EVehicleDoorQuantity>( tmpEnumInt );

    return in;
}
