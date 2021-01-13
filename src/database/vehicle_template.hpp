#ifndef __VEHICLE_TEMPLATE_H__
#define __VEHICLE_TEMPLATE_H__

#include "vehicle_data/vehicle_basic_data.hpp"
#include "vehicle_data/vehicle_technical_data.hpp"

#include <cstdint>

struct SVehicleTemplate
{
    uint32_t ID;

    std::string templateName;

    SVehicleBasicData basicData;
    SVehicleTechnicalData technicalData;

    SVehicleTemplate();
    SVehicleTemplate( uint32_t id );
};

#endif // __VEHICLE_TEMPLATE_H__