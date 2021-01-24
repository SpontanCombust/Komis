#include "komis_frame.hpp"

#include "gui/widgets/vehicle_creator_dialog/implementation/vehicle_creator_dialog.hpp"

CKomisFrame::CKomisFrame( wxWindow *parent ) : IKomisFrame( parent ) 
{
    m_vehicleManager = new CVehicleManager();

    m_notebook_pageVehicles_panel->setDatabaseHandle( m_vehicleManager );
    m_notebook_pageVehicles_panel->refreshListItems();
}

CKomisFrame::~CKomisFrame() 
{
    delete m_vehicleManager;
}

void CKomisFrame::OnClose(wxCommandEvent& event) 
{
    Close();
}
