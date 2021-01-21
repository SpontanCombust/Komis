#ifndef __VEHICLE_FILTERS_DATA_H__
#define __VEHICLE_FILTERS_DATA_H__

#include <string>
#include <vector>
#include "../vehicle.hpp"

struct VehicleFilters {
	EVehicleType vehicleType;
	std::string brandName;
	std::string modelName;

	EVehicleFuel fuelType;
	EVehicleTransmission transmissionType;
	unsigned int engineHorsepowerMin;
	unsigned int engineHorsepowerMax;
	unsigned int engineCapacityMin;
	unsigned int engineCapacityMax;
	EVehicleDoorQuantity doorQuantity;
	EVehicleWheelDrive wheelDriveType;

	float priceMin;
	float priceMax;
	unsigned int mileageMin;
	unsigned int mileageMax;
	std::string color;
	std::string state;
};

#endif // __VEHICLE_FILTERS_DATA_H__
