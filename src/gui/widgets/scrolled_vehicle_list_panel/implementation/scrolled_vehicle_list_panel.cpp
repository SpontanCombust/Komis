#include "scrolled_vehicle_list_panel.hpp"

CScrolledVehicleListPanel::CScrolledVehicleListPanel( wxWindow* parent )
:
IScrolledVehicleListPanel( parent )
{

}


CScrolledVehicleListPanel::CScrolledVehicleListPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name) 
:
IScrolledVehicleListPanel( parent, id, pos, size, style, name )
{

}

CScrolledVehicleListPanel::~CScrolledVehicleListPanel() 
{

}


void CScrolledVehicleListPanel::OnPrevPageButtonClick( wxCommandEvent& event )
{
// TODO: Implement OnPrevPageButtonClick
}

void CScrolledVehicleListPanel::OnNextPageButtonClick( wxCommandEvent& event )
{
// TODO: Implement OnNextPageButtonClick
}

void CScrolledVehicleListPanel::OnRefreshButtonClicked(wxCommandEvent& event) 
{

}

void CScrolledVehicleListPanel::OnSetFiltersButtonClicked(wxCommandEvent& event) 
{

}
