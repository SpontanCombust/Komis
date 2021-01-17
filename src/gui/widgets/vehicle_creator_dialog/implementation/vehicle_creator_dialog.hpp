#ifndef __VEHICLE_CREATOR_DIALOG_H__
#define __VEHICLE_CREATOR_DIALOG_H__

#include "../interface/i_vehicle_creator_dialog.h"
#include "database/vehicle_management/vehicle_manager.hpp"

class CVehicleCreatorDialog : public IVehicleCreatorDialog
{
private:
    CVehicleManager *m_databaseHandle;

public:
    CVehicleCreatorDialog( CVehicleManager *database, wxWindow *parent );
    ~CVehicleCreatorDialog();

    virtual void OnSubmitVehicleButtonClicked( wxCommandEvent& event ) override;
    virtual void OnCancel( wxCommandEvent& event ) override;

private:
    void populateVehicleTypeChoice();
    void populateFuelChoice();
    void populateTransmissionChoice();
    void populateWheelDriveChoice();
    void populateDoorQuantityChoice();
};


#endif // __VEHICLE_CREATOR_DIALOG_H__