#ifndef __VEHICLE_TECHNICAL_DATA_H__
#define __VEHICLE_TECHNICAL_DATA_H__

#include <string>

enum class EVehicleFuel
{
    GASOLINE,
    DIESEL,
    LPG,
    ELECTRICITY
};

enum class EVehicleTransmission
{
    MANUAL,
    AUTOMATIC
};

enum class EWheelDrive
{
    FRONT,
    REAR,
    ALL
};

struct SVehicleTechnicalData
{
    EVehicleFuel fuelType;
    EVehicleTransmission transmissionType;
    EWheelDrive wheelDriveType;
    unsigned int engineHorsepower;
    unsigned int engineCapacityL;
    std::string doorQuantity;
};

#endif // __VEHICLE_TECHNICAL_DATA_H__
