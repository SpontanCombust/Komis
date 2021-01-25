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

void writeVehicleSpecimenDataToStream( std::ostream& out, const SVehicleSpecimenData& data );
bool readVehicleSpecimenDataFromStream( std::istream& in, SVehicleSpecimenData& data );

#endif // __VEHICLE_SPECIMEN_DATA_H__