#ifndef __VEHICLE_CREATOR_DIALOG_H__
#define __VEHICLE_CREATOR_DIALOG_H__

#include "../interface/i_vehicle_creator_dialog.h"
#include "database/vehicle_management/vehicle_manager.hpp"

class CVehicleCreatorDialog : public IVehicleCreatorDialog
{
public:
    CVehicleCreatorDialog( wxWindow *parent, wxWindowID id, CVehicleManager *database );
    ~CVehicleCreatorDialog();

    virtual void OnAddVehicleButtonClicked( wxCommandEvent& event ) override;
};


#endif // __VEHICLE_CREATOR_DIALOG_H__