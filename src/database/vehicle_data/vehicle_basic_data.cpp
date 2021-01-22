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
