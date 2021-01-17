#ifndef __VEHICLE_BASIC_DATA_H__
#define __VEHICLE_BASIC_DATA_H__

#include <string>
#include <vector>

enum class EVehicleType
{
    CAR,
    MOTORCYCLE,
    SUV,
    VAN,
    TRUCK
};

std::string vehicleTypeToStringPolish( EVehicleType vehicleType );
const std::vector< EVehicleType > getPossibleVehicleTypes();

struct SVehicleBasicData
{
    EVehicleType vehicleType;
    std::string brandName;
    std::string modelName;
};

#endif // __VEHICLE_BASIC_DATA_H__
