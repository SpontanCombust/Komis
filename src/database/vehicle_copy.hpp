#ifndef __VEHICLE_COPY_H__
#define __VEHICLE_COPY_H__

#include "vehicle_model.hpp"

struct SVehicleCopy : SVehicleModel
{
    float price;
    unsigned int mileageKm;
    std::string color;
    std::string state;
    std::string additionalInformation;
};

#endif // __VEHICLE_COPY_H__