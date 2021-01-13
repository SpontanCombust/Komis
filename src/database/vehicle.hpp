#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include "vehicle_data/vehicle_basic_data.hpp"
#include "vehicle_data/vehicle_technical_data.hpp"
#include "vehicle_data/vehicle_specimen_data.hpp"

#include <cstdint>

struct SVehicle
{
    uint32_t ID;

    SVehicleBasicData basicData;
    SVehicleTechnicalData technicalData;
    SVehicleSpecimenData specimenData;

    SVehicle();
    SVehicle( uint32_t id );
};

#endif // __VEHICLE_H__