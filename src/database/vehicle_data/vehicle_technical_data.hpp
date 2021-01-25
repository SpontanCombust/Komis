#ifndef __VEHICLE_TECHNICAL_DATA_H__
#define __VEHICLE_TECHNICAL_DATA_H__

#include <iostream>
#include <string>
#include <vector>

enum class EVehicleFuel
{
    GASOLINE,
    DIESEL,
    LPG,
    ELECTRICITY
};

std::string vehicleFuelToStringPolish( EVehicleFuel vehicleFuel );
const std::vector< EVehicleFuel > getPossibleVehicleFuels();


enum class EVehicleTransmission
{
    MANUAL,
    AUTOMATIC
};

std::string vehicleTransmissionToStringPolish( EVehicleTransmission vehicleTransmission );
const std::vector< EVehicleTransmission > getPossibleVehicleTransmissions();


enum class EVehicleWheelDrive
{
    FRONT,
    REAR,
    ALL
};

std::string vehicleWheelDriveToStringPolish( EVehicleWheelDrive wheelDrive );
const std::vector< EVehicleWheelDrive > getPossibleVehicleWheelDrives();


enum class EVehicleDoorQuantity
{
    NONE,
    THREE,
    FIVE,
    OTHER
};

std::string vehicleDoorQuantityToStringPolish( EVehicleDoorQuantity doorQuantity );
const std::vector< EVehicleDoorQuantity > getPossibleVehicleDoorQuantities();


struct SVehicleTechnicalData
{
    EVehicleFuel fuelType;
    EVehicleTransmission transmissionType;
    EVehicleWheelDrive wheelDriveType;
    unsigned int engineHorsepower;
    unsigned int engineCapacityL;
    EVehicleDoorQuantity doorQuantity;
};

void writeVehicleTechnicalDataToStream( std::ostream& out, const SVehicleTechnicalData& data );
bool readVehicleTechnicalDataFromStream( std::istream& in, SVehicleTechnicalData& data );

#endif // __VEHICLE_TECHNICAL_DATA_H__
