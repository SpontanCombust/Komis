#ifndef __VEHICLE_SPECIMEN_DATA_H__
#define __VEHICLE_SPECIMEN_DATA_H__

#include <string>

struct SVehicleSpecimenData
{
    float price;
    unsigned int mileageKm;
    std::string color;
    std::string state;
    std::string additionalInformation;
};

#endif // __VEHICLE_SPECIMEN_DATA_H__