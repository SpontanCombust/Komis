#include "scrolled_vehicle_list_item_panel.hpp"

CScrolledVehicleListItemPanel::CScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) 
: IScrolledVehicleListItemPanel( parent, id, pos, size, style, name )
{

}

CScrolledVehicleListItemPanel::~CScrolledVehicleListItemPanel() 
{

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
    m_staticText_engineHorsepower->SetLabelText( _( std::to_string( capacity ) + " L" ) );
}

void CScrolledVehicleListItemPanel::setPrice( float price ) 
{
    m_staticText_engineHorsepower->SetLabelText( _( std::to_string( price ) + " zł" ) );
}
