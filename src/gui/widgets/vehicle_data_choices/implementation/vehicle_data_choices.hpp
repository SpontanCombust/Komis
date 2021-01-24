#ifndef __VEHICLE_DATA_CHOICES_H__
#define __VEHICLE_DATA_CHOICES_H__

#include "database/vehicle.hpp"

#include <wx/choice.h>

#include <vector>

class CVehicleTypeChoice : public wxChoice
{
private:
    std::vector< EVehicleType > m_possibleVehicleTypes;

public:
    CVehicleTypeChoice( wxWindow *parent, wxWindowID id,
                        const wxPoint& pos,
                        const wxSize& size,
                        const wxArrayString& choices,
                        long style = 0 );

    void setVehicleType( EVehicleType vehicleType );
    EVehicleType getVehicleType();
};

class CVehicleFuelChoice : public wxChoice
{
private:
    std::vector< EVehicleFuel > m_possibleVehicleFuels;

public:
    CVehicleFuelChoice( wxWindow *parent, wxWindowID id,
                        const wxPoint& pos,
                        const wxSize& size,
                        const wxArrayString& choices,
                        long style = 0 );

    void setVehicleFuel( EVehicleFuel vehicleFuel );
    EVehicleFuel getVehicleFuel();
};

class CVehicleTransmissionChoice : public wxChoice
{
    private:
    std::vector< EVehicleTransmission > m_possibleVehicleTransmissions;

public:
    CVehicleTransmissionChoice( wxWindow *parent, wxWindowID id,
                                const wxPoint& pos,
                                const wxSize& size,
                                const wxArrayString& choices,
                                long style = 0 );

    void setVehicleTransmission( EVehicleTransmission vehicleTransmission );
    EVehicleTransmission getVehicleTransmission();
};

class CVehicleWheelDriveChoice : public wxChoice
{
private:
    std::vector< EVehicleWheelDrive > m_possibleVehicleWheelDrives;

public:
    CVehicleWheelDriveChoice( wxWindow *parent, wxWindowID id,
                            const wxPoint& pos,
                            const wxSize& size,
                            const wxArrayString& choices,
                            long style = 0 );

    void setVehicleWheelDrive( EVehicleWheelDrive vehicleWheelDrive );
    EVehicleWheelDrive getVehicleWheelDrive();
};

class CVehicleDoorQuantityChoice : public wxChoice
{
private:
    std::vector< EVehicleDoorQuantity > m_possibleVehicleDoorQuantities;

public:
    CVehicleDoorQuantityChoice( wxWindow *parent, wxWindowID id,
                                const wxPoint& pos,
                                const wxSize& size,
                                const wxArrayString& choices,
                                long style = 0 );

    void setVehicleDoorQuantity( EVehicleDoorQuantity vehicleDoorQuantity );
    EVehicleDoorQuantity getVehicleDoorQuantity();
};

#endif // __VEHICLE_DATA_CHOICES_H__