#ifndef __VEHICLE_BASIC_DATA_H__
#define __VEHICLE_BASIC_DATA_H__

#include <iostream>
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

std::ostream& operator<<( std::ostream& out, const SVehicleBasicData& vehicleBasicData );
std::istream& operator>>( std::istream& in, SVehicleBasicData& vehicleBasicData );

#endif // __VEHICLE_BASIC_DATA_H__
