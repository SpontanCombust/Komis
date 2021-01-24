#include "vehicle_specimen_data.hpp"

std::ostream& operator<<( std::ostream& out, const SVehicleSpecimenData& vehicleSpecimenData ) 
{
    out << vehicleSpecimenData.price << '\n'
        << vehicleSpecimenData.mileageKm << '\n'
        << vehicleSpecimenData.color << '\n'
        << vehicleSpecimenData.state << '\n'
        << vehicleSpecimenData.additionalInformation << std::endl;

    return out;
}

std::istream& operator>>( std::istream& in, SVehicleSpecimenData& vehicleSpecimenData ) 
{
    in  >> vehicleSpecimenData.price
        >> vehicleSpecimenData.mileageKm
        >> vehicleSpecimenData.color
        >> vehicleSpecimenData.state
        >> vehicleSpecimenData.additionalInformation;

    return in;
}

