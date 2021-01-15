#include "vehicle_creator_dialog.hpp"

CVehicleCreatorDialog::CVehicleCreatorDialog( CVehicleManager *database, wxWindow *parent ) : IVehicleCreatorDialog( parent )
{
    m_databaseHandle = database;   
}

CVehicleCreatorDialog::~CVehicleCreatorDialog()
{
        
}

void CVehicleCreatorDialog::OnSubmitVehicleButtonClicked( wxCommandEvent& event ) 
{

}
