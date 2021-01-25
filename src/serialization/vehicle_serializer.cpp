#include "vehicle_serializer.hpp"

bool writeVehiclesToFile( const char *path, std::vector< SVehicle* > vehicleHandles, bool shouldWhipeFile ) 
{
    std::ofstream output;

    if( shouldWhipeFile )
    {
        output.open( path, std::ios::out | std::ios::trunc );
        output << KOMIS_WATERMARK_VEHICLE << '\0';
    }
    else
    {
        output.open( path, std::ios::out | std::ios::app );
    }

    if( !output )
    {
        return false;
    }

    for( SVehicle *handle : vehicleHandles )
    {
        output << '\n';
        writeVehicleBasicDataToStream( output, handle->basicData );
        writeVehicleTechnicalDataToStream( output, handle->technicalData );
        writeVehicleSpecimenDataToStream( output, handle->specimenData );
    }

    output.close();
    return true;
}

bool readVehiclesFromFile( const char *path, std::vector< SVehicle > *vehicleVecPtr ) 
{
    std::ifstream input;
    std::string fileWatermark;
    std::string newObjectMarker;
    SVehicle readVehicle;

    input.open( path, std::ios::in );
    if( !input )
    {
        return false;
    }

    vehicleVecPtr->clear();

    std::getline( input, fileWatermark, '\0' );
    if( fileWatermark != KOMIS_WATERMARK_VEHICLE )
    {
        input.close();
        return false;
    }

    while( !std::getline( input, newObjectMarker, '\n' ).eof() )
    {
        if( !readVehicleBasicDataFromStream( input, readVehicle.basicData) )
        {
            return false;
        }
        if( !readVehicleTechnicalDataFromStream( input, readVehicle.technicalData ) )
        {
            return false;
        }
        if( !readVehicleSpecimenDataFromStream( input, readVehicle.specimenData ) )
        {
            return false;
        }

        vehicleVecPtr->push_back( readVehicle );
    }

    input.close();
    return true;
}
