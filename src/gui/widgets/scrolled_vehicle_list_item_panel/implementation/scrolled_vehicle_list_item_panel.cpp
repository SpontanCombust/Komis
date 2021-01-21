#include "scrolled_vehicle_list_item_panel.hpp"

CScrolledVehicleListItemPanel::CScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) 
: IScrolledVehicleListItemPanel( parent, id, pos, size, style, name )
{
    m_isVehicleDeleted = false;
    clearEditableStaticTexts();
}

CScrolledVehicleListItemPanel::~CScrolledVehicleListItemPanel() 
{
    m_isVehicleDeleted = false;
    clearEditableStaticTexts();
}


void CScrolledVehicleListItemPanel::OnViewVehicleButtonClicked(wxCommandEvent& event) 
{

}

void CScrolledVehicleListItemPanel::OnEditVehicleButtonClicked(wxCommandEvent& event) 
{

}

void CScrolledVehicleListItemPanel::OnDeleteVehicleButtonClicked(wxCommandEvent& event) 
{


    m_isVehicleDeleted = true;
}


void CScrolledVehicleListItemPanel::setBrandAndModel( std::string brand, std::string model ) 
{
    m_staticText_brandAndModel->SetLabelText( _( brand + " " + model ) );
}

void CScrolledVehicleListItemPanel::setState( std::string state ) 
{
    m_staticText_state->SetLabelText( _( state ) );
}

void CScrolledVehicleListItemPanel::setMileage(unsigned int mileage) 
{
    m_staticText_mileage->SetLabelText( _( std::to_string( mileage ) + " km" ) );
}

void CScrolledVehicleListItemPanel::setEngineHorsepower( unsigned int horsepower ) 
{
    m_staticText_engineHorsepower->SetLabelText( _( std::to_string( horsepower ) + " KM" ) );
}

void CScrolledVehicleListItemPanel::setEngineCapacity( unsigned int capacity ) 
{
    m_staticText_engineCapacity->SetLabelText( _( std::to_string( capacity ) + " L" ) );
}

void CScrolledVehicleListItemPanel::setPrice( float price ) 
{
    m_staticText_price->SetLabelText( _( std::to_string( price ) + " zł" ) );
}



bool CScrolledVehicleListItemPanel::getIsVehicleDeleted() 
{
    return m_isVehicleDeleted;
}



void CScrolledVehicleListItemPanel::clearEditableStaticTexts() 
{
    m_staticText_brandAndModel->SetLabelText( "" );
    m_staticText_state->SetLabelText( "" );
    m_staticText_mileage->SetLabelText( "" );
    m_staticText_engineHorsepower->SetLabelText( "" );
    m_staticText_engineCapacity->SetLabelText( "" );
    m_staticText_price->SetLabelText( "" );
}

void CScrolledVehicleListItemPanel::clearAllStaticTexts() 
{
    clearEditableStaticTexts();
    m_staticText_stateLabel->SetLabelText( "" );
    m_staticText_mileageLabel->SetLabelText( "" );
    m_staticText_engineCapacityLabel->SetLabelText( "" );
    m_staticText_engineHorsepowerLabel->SetLabelText( "" );
}

void CScrolledVehicleListItemPanel::setNonEditableStaticTexts() 
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

