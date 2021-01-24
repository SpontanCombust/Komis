#ifndef __VEHICLE_SPECIMEN_DATA_H__
#define __VEHICLE_SPECIMEN_DATA_H__

#include <iostream>
#include <string>

struct SVehicleSpecimenData
{
    float price;
    unsigned int mileageKm;
    std::string color;
    std::string state;
    std::string additionalInformation;
};

std::ostream& operator<<( std::ostream& out, const SVehicleSpecimenData& vehicleSpecimenData );
std::istream& operator>>( std::istream& in, SVehicleSpecimenData& vehicleSpecimenData );

#endif // __VEHICLE_SPECIMEN_DATA_H__