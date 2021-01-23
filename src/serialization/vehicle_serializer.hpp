#ifndef __VEHICLE_SERIALIZER_H__
#define __VEHICLE_SERIALIZER_H__

#include "database/vehicle.hpp"

#include <fstream>
#include <string>
#include <vector>

const std::string KOMIS_WATERMARK_VEHICLE = "KOMIS_VEHICLE";

bool writeVehiclesToFile( const char *path, std::vector< SVehicle* > vehicleHandles, bool shouldAppend );
bool readVehiclesFromFile( const char *path, std::vector< SVehicle > *vehicleVecPtr );

#endif // __VEHICLE_SERIALIZER_H__