#include "komis_frame.hpp"

#include "gui/widgets/vehicle_creator_dialog/implementation/vehicle_creator_dialog.hpp"
#include "gui/widgets/vehicle_search_dialog/implementation/vehicle_search_dialog.h"

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

void CKomisFrame::OnSearchVehicleButtonClicked(wxCommandEvent& event) 
{
    SVehicleSearchDialog *vehiclesearchdialog = new SVehicleSearchDialog( m_vehicleManager, this );
    vehiclesearchdialog->Show();
}

