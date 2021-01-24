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

std::ostream& operator<<( std::ostream& out, const SVehicleBasicData& vehicleBasicData ) 
{
    out << static_cast<int>( vehicleBasicData.vehicleType ) << '\n'
        << vehicleBasicData.brandName << '\n'
        << vehicleBasicData.modelName << std::endl;

    return out;
}

std::istream& operator>>( std::istream& in, SVehicleBasicData& vehicleBasicData ) 
{
    int vehTypeInt;

    in  >> vehTypeInt
        >> vehicleBasicData.brandName
        >> vehicleBasicData.modelName;

    vehicleBasicData.vehicleType = static_cast< EVehicleType >( vehTypeInt );

    return in;
}
