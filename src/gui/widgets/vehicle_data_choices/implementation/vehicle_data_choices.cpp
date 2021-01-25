#include "vehicle_data_choices.hpp"

CVehicleTypeChoice::CVehicleTypeChoice( wxWindow *parent, wxWindowID id,
                                        const wxPoint& pos,
                                        const wxSize& size,
                                        const wxArrayString& choices,
                                        long style )
: wxChoice( parent, id, pos, size, choices, style )
{
    m_possibleVehicleTypes = getPossibleVehicleTypes();

    Clear();

	for( const auto& vehicleType : m_possibleVehicleTypes )
	{
		Append( vehicleTypeToStringPolish( vehicleType ) );
	}

	SetSelection(0);
}

void CVehicleTypeChoice::setVehicleType( EVehicleType vehicleType ) 
{
    int i;
    for (i = 0; i < m_possibleVehicleTypes.size(); i++)
    {
        if( m_possibleVehicleTypes[i] == vehicleType )
        {
            break;
        }
    }
    
    SetSelection(i);
}

EVehicleType CVehicleTypeChoice::getVehicleType() 
{
    return m_possibleVehicleTypes[ GetSelection() ];
}




CVehicleFuelChoice::CVehicleFuelChoice( wxWindow *parent, wxWindowID id,
                                        const wxPoint& pos,
                                        const wxSize& size,
                                        const wxArrayString& choices,
                                        long style )
: wxChoice( parent, id, pos, size, choices, style )
{
    m_possibleVehicleFuels = getPossibleVehicleFuels();

    Clear();

	for( const auto& vehicleFuel : m_possibleVehicleFuels )
	{
		Append( vehicleFuelToStringPolish( vehicleFuel ) );
	}

	SetSelection(0);
}

void CVehicleFuelChoice::setVehicleFuel( EVehicleFuel vehicleFuel ) 
{
    int i;
    for (i = 0; i < m_possibleVehicleFuels.size(); i++)
    {
        if( m_possibleVehicleFuels[i] == vehicleFuel )
        {
            break;
        }
    }
    
    SetSelection(i);
}

EVehicleFuel CVehicleFuelChoice::getVehicleFuel() 
{
    return m_possibleVehicleFuels[ GetSelection() ];
}




CVehicleTransmissionChoice::CVehicleTransmissionChoice( wxWindow *parent, wxWindowID id,
                                                        const wxPoint& pos,
                                                        const wxSize& size,
                                                        const wxArrayString& choices,
                                                        long style )
: wxChoice( parent, id, pos, size, choices, style ) 
{
    m_possibleVehicleTransmissions = getPossibleVehicleTransmissions();

    Clear();

    for( const auto& vehicleTransmission : m_possibleVehicleTransmissions )
    {
        Append( vehicleTransmissionToStringPolish( vehicleTransmission ) );
    }

    SetSelection(0);
}

void CVehicleTransmissionChoice::setVehicleTransmission( EVehicleTransmission vehicleTransmission ) 
{
    int i;
    for (i = 0; i < m_possibleVehicleTransmissions.size(); i++)
    {
        if( m_possibleVehicleTransmissions[i] == vehicleTransmission )
        {
            break;
        }
    }

    SetSelection(i);
}

EVehicleTransmission CVehicleTransmissionChoice::getVehicleTransmission() 
{
    return m_possibleVehicleTransmissions[ GetSelection() ];
}




CVehicleWheelDriveChoice::CVehicleWheelDriveChoice( wxWindow *parent, wxWindowID id,
                                                    const wxPoint& pos,
                                                    const wxSize& size,
                                                    const wxArrayString& choices,
                                                    long style )
: wxChoice( parent, id, pos, size, choices, style )  
{
    m_possibleVehicleWheelDrives = getPossibleVehicleWheelDrives();

    Clear();

    for( const auto& vehicleWheelDrive : m_possibleVehicleWheelDrives )
    {
        Append( vehicleWheelDriveToStringPolish( vehicleWheelDrive ) );
    }

    SetSelection(0);
}

void CVehicleWheelDriveChoice::setVehicleWheelDrive( EVehicleWheelDrive vehicleWheelDrive ) 
{
    int i;
    for (i = 0; i < m_possibleVehicleWheelDrives.size(); i++)
    {
        if( m_possibleVehicleWheelDrives[i] == vehicleWheelDrive )
        {
            break;
        }
    }
    
    SetSelection(i);
}

EVehicleWheelDrive CVehicleWheelDriveChoice::getVehicleWheelDrive() 
{
    return m_possibleVehicleWheelDrives[ GetSelection() ];
}




CVehicleDoorQuantityChoice::CVehicleDoorQuantityChoice( wxWindow *parent, wxWindowID id,
                                                        const wxPoint& pos,
                                                        const wxSize& size,
                                                        const wxArrayString& choices,
                                                        long style )
: wxChoice( parent, id, pos, size, choices, style ) 
{
    m_possibleVehicleDoorQuantities = getPossibleVehicleDoorQuantities();

    Clear();

    for( const auto& vehicleDoorQuantity : m_possibleVehicleDoorQuantities )
    {
        Append( vehicleDoorQuantityToStringPolish( vehicleDoorQuantity ) );
    }

    SetSelection(1);
}

void CVehicleDoorQuantityChoice::setVehicleDoorQuantity(EVehicleDoorQuantity vehicleDoorQuantity) 
{
    int i;
    for (i = 0; i < m_possibleVehicleDoorQuantities.size(); i++)
    {
        if( m_possibleVehicleDoorQuantities[i] == vehicleDoorQuantity )
        {
            break;
        }
    }
    
    SetSelection(i);
}

EVehicleDoorQuantity CVehicleDoorQuantityChoice::getVehicleDoorQuantity() 
{
    return m_possibleVehicleDoorQuantities[ GetSelection() ];
}
