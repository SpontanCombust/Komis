#include "vehicle_specimen_data.hpp"

void writeVehicleSpecimenDataToStream( std::ostream& out, const SVehicleSpecimenData& data ) 
{
    out << data.price << '\0'
        << data.mileageKm << '\0'
        << data.color << '\0'
        << data.state << '\0'
        << data.additionalInformation << '\0';
}

bool readVehicleSpecimenDataFromStream( std::istream& in, SVehicleSpecimenData& data ) 
{
    int tmpInt;
    float tmpFloat;
    std::string line;

    try
    {
        std::getline( in, line, '\0' );
        tmpFloat = std::stof( line );
        data.price = tmpFloat;

        std::getline( in, line, '\0' );
        tmpInt = std::stoi( line );
        data.mileageKm = ( unsigned int )tmpInt;

        std::getline( in, line, '\0' );
        data.color = line;

        std::getline( in, line, '\0' );
        data.state = line;

        std::getline( in, line, '\0' );
        data.additionalInformation = line;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }

    return true;
}

