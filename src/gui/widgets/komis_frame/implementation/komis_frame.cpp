#include "komis_frame.hpp"

#include "gui/widgets/vehicle_creator_dialog/implementation/vehicle_creator_dialog.hpp"

CKomisFrame::CKomisFrame( wxWindow *parent ) : IKomisFrame( parent ) 
{
    m_vehicleManager = new CVehicleManager();
}

CKomisFrame::~CKomisFrame() 
{
    delete m_vehicleManager;
}

void CKomisFrame::OnClose(wxCommandEvent& event) 
{
    Close();
}

void CKomisFrame::OnAddVehicleButtonClicked(wxCommandEvent& event) 
{
    CVehicleCreatorDialog *vehicleCreatorDialog = new CVehicleCreatorDialog( m_vehicleManager, this );
    vehicleCreatorDialog->Show();
}
