#include "vehicle_serializer.hpp"

bool writeVehiclesToFile( const char *path, std::vector< SVehicle* > vehicleHandles, bool shouldAppend ) 
{
    std::ofstream output;

    if( shouldAppend )
    {
        output.open( path, std::ios::out | std::ios::app );
    }
    else
    {
        output.open( path, std::ios::out | std::ios::trunc );
        output << KOMIS_WATERMARK_VEHICLE;
    }

    if( !output )
    {
        return false;
    }

    for( SVehicle *handle : vehicleHandles )
    {
        output.write( ( char * )&( handle->basicData ), sizeof( SVehicleBasicData ) );   
        output.write( ( char * )&( handle->technicalData ), sizeof( SVehicleTechnicalData ) );
        output.write( ( char * )&( handle->specimenData ), sizeof( SVehicleSpecimenData ) );
    }

    output.close();
    return true;
}

bool readVehiclesFromFile( const char *path, std::vector< SVehicle > *vehicleVecPtr ) 
{
    std::ifstream input;
    std::string fileWatermark;
    SVehicle readVehicle;

    input.open( path, std::ios::in );
    if( input )
    {
        return false;
    }

    vehicleVecPtr->clear();

    input >> fileWatermark;
    if( fileWatermark != KOMIS_WATERMARK_VEHICLE )
    {
        input.close();
        return false;
    }

    while( !input.eof() )
    {
        input.read( ( char * )&( readVehicle.basicData ), sizeof( SVehicleBasicData ) );
        input.read( ( char * )&( readVehicle.technicalData ), sizeof( SVehicleTechnicalData ) );
        input.read( ( char * )&( readVehicle.specimenData ), sizeof( SVehicleSpecimenData ) );

        vehicleVecPtr->push_back( readVehicle );
    }

    input.close();
    return true;
}
