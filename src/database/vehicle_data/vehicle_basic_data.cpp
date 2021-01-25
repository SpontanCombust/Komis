#include "vehicle_basic_data.hpp"

std::string vehicleTypeToStringPolish( EVehicleType vehicleType ) 
{
    switch( vehicleType )
    {
        case EVehicleType::CAR:         return "Samochód osobowy";
        case EVehicleType::MOTORCYCLE:  return "Motocykl";
        case EVehicleType::SUV:         return "SUV";
        case EVehicleType::VAN:         return "VAN";
        case EVehicleType::TRUCK:       return "Ciężarówka";

        default: return "Pojazd";
    }
}

const std::vector< EVehicleType > getPossibleVehicleTypes()
{
    return {
        EVehicleType::CAR,
        EVehicleType::MOTORCYCLE,
        EVehicleType::SUV,
        EVehicleType::VAN,
        EVehicleType::TRUCK
    };
}



void writeVehicleBasicDataToStream( std::ostream& out, const SVehicleBasicData& data ) 
{
    out << static_cast<int>( data.vehicleType ) << '\0'
        << data.brandName << '\0'
        << data.modelName << '\0';
}

bool readVehicleBasicDataFromStream( std::istream& in, SVehicleBasicData& data ) 
{
    int tmpInt;
    std::string line;

    try
    {
        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.vehicleType = static_cast< EVehicleType >( tmpInt );

        std::getline( in, line, '\0' );
        data.brandName = line;

        std::getline( in, line, '\0' );
        data.modelName = line;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
    
    return true;
}
