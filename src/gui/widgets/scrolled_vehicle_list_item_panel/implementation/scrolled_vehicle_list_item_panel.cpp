#include "scrolled_vehicle_list_item_panel.hpp"
#include "gui/widgets/vehicle_view_dialog/implementation/vehicle_view_dialog.h"
#include "gui/widgets/vehicle_edit_dialog/implementation/vehicle_edit_dialog.h"

#include <wx/msgdlg.h>

CScrolledVehicleListItemPanel::CScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) 
: IScrolledVehicleListItemPanel( parent, id, pos, size, style, name )
{
    m_representedVehicleHandle = nullptr;
    m_shouldVehicleBeDeleted = false;
    clearVehicleDataStaticTexts();
}

CScrolledVehicleListItemPanel::~CScrolledVehicleListItemPanel() 
{
    m_representedVehicleHandle = nullptr;
    m_shouldVehicleBeDeleted = false;
    clearVehicleDataStaticTexts();
}


void CScrolledVehicleListItemPanel::OnViewVehicleButtonClicked(wxCommandEvent& event) 
{
    SVehicleViewDialog* vehicleViewDialog = new SVehicleViewDialog(*m_representedVehicleHandle,this);
    vehicleViewDialog->Show();
}

void CScrolledVehicleListItemPanel::OnEditVehicleButtonClicked(wxCommandEvent& event) 
{
    EVehicleEditDialog* vehicleEditDialog = new EVehicleEditDialog(m_representedVehicleHandle, this);
    vehicleEditDialog->Show();
}

void CScrolledVehicleListItemPanel::OnDeleteVehicleButtonClicked(wxCommandEvent& event) 
{
    int answer = wxMessageBox( "Na pewno usunąć pojazd?", "Usuwanie pojazdu", wxYES_NO | wxCANCEL, this );

    if( answer == wxYES )
    {
        m_shouldVehicleBeDeleted = true;
        clearAllStaticTexts();
        disableAllButtons();
        setVehicleDeletedText();
    }
}



void CScrolledVehicleListItemPanel::setRepresentedVehicle( SVehicle *vehicleHandle ) 
{
    m_representedVehicleHandle = vehicleHandle;
}

SVehicle* CScrolledVehicleListItemPanel::getRepresentedVehicle() 
{
    return m_representedVehicleHandle;
}



void CScrolledVehicleListItemPanel::setVehicleDataStaticTexts() 
{
    if( m_representedVehicleHandle )
    {
        setBrandAndModelText( m_representedVehicleHandle->basicData.brandName, m_representedVehicleHandle->basicData.modelName );
        setStateText( m_representedVehicleHandle->specimenData.state );
        setMileage( m_representedVehicleHandle->specimenData.mileageKm );
        setEngineHorsepowerText( m_representedVehicleHandle->technicalData.engineHorsepower );
        setEngineCapacityText( m_representedVehicleHandle->technicalData.engineCapacityL );
        setPriceText( m_representedVehicleHandle->specimenData.price );
    }
}



void CScrolledVehicleListItemPanel::setBrandAndModelText( std::string brand, std::string model ) 
{
    m_staticText_brandAndModel->SetLabelText( _( brand + " " + model ) );
}

void CScrolledVehicleListItemPanel::setStateText( std::string state ) 
{
    m_staticText_state->SetLabelText( _( state ) );
}

void CScrolledVehicleListItemPanel::setMileage(unsigned int mileage) 
{
    m_staticText_mileage->SetLabelText( _( std::to_string( mileage ) + " km" ) );
}

void CScrolledVehicleListItemPanel::setEngineHorsepowerText( unsigned int horsepower ) 
{
    m_staticText_engineHorsepower->SetLabelText( _( std::to_string( horsepower ) + " KM" ) );
}

void CScrolledVehicleListItemPanel::setEngineCapacityText( unsigned int capacity ) 
{
    m_staticText_engineCapacity->SetLabelText( _( std::to_string( capacity ) + " L" ) );
}

void CScrolledVehicleListItemPanel::setPriceText( float price ) 
{
    m_staticText_price->SetLabelText( _( std::to_string( price ) + " zł" ) );
}



void CScrolledVehicleListItemPanel::setShouldVehicleBeDeleted( bool shouldBeDeleted ) 
{
    m_shouldVehicleBeDeleted = shouldBeDeleted;
}

bool CScrolledVehicleListItemPanel::getShouldVehicleBeDeleted() 
{
    return m_shouldVehicleBeDeleted;
}



void CScrolledVehicleListItemPanel::clearVehicleDataStaticTexts() 
{
    m_staticText_brandAndModel->SetLabelText( "                      " );
    m_staticText_state->SetLabelText( "                      " );
    m_staticText_mileage->SetLabelText( "                      " );
    m_staticText_engineHorsepower->SetLabelText( "                      " );
    m_staticText_engineCapacity->SetLabelText( "                      " );
    m_staticText_price->SetLabelText( "                      " );
}

void CScrolledVehicleListItemPanel::clearAllStaticTexts() 
{
    clearVehicleDataStaticTexts();
    m_staticText_stateLabel->SetLabelText( "           " );
    m_staticText_mileageLabel->SetLabelText( "           " );
    m_staticText_engineCapacityLabel->SetLabelText( "           " );
    m_staticText_engineHorsepowerLabel->SetLabelText( "           " );
}

void CScrolledVehicleListItemPanel::resetLabelStaticTexts() 
{
    m_staticText_stateLabel->SetLabelText( _("Stan:") );
    m_staticText_mileageLabel->SetLabelText( _("Przebieg:") );
    m_staticText_engineHorsepowerLabel->SetLabelText( _("Moc silnika:") );
    m_staticText_engineCapacityLabel->SetLabelText( _("Pojemność silnika:") );
}

void CScrolledVehicleListItemPanel::disableAllButtons() 
{
    m_button_viewVehicle->Disable();
    m_button_editVehicle->Disable();
    m_button_deleteVehicle->Disable();
}

void CScrolledVehicleListItemPanel::enableAllButtons() 
{
    m_button_viewVehicle->Enable();
    m_button_editVehicle->Enable();
    m_button_deleteVehicle->Enable();
}



void CScrolledVehicleListItemPanel::setVehicleDeletedText() 
{
    m_staticText_price->SetLabelText( "Pojazd został usunięty" );
}
