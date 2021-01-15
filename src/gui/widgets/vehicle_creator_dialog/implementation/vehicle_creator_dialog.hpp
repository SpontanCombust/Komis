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
};


#endif // __VEHICLE_CREATOR_DIALOG_H__