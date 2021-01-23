#include "scrolled_vehicle_list_window.hpp"

#include <stdexcept>

CScrolledVehicleListWindow::CScrolledVehicleListWindow(wxWindow *parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style )
: wxScrolledWindow( parent, winid, pos, size, style ) 
{
    wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
    for (int i = 0; i < VEHICLE_ITEM_COUNT; i++)
    {
        m_vehiclePanelItems[i] = new CScrolledVehicleListItemPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxBORDER_RAISED|wxTAB_TRAVERSAL );
        bSizer2->Add( m_vehiclePanelItems[i], 0, wxEXPAND | wxALL, 5 );
    }

    SetSizer( bSizer2 );
	Layout();
	bSizer2->Fit( this );    
}

int CScrolledVehicleListWindow::getVehicleItemCount() 
{
    return VEHICLE_ITEM_COUNT;
}

CScrolledVehicleListItemPanel *CScrolledVehicleListWindow::getVehiclePanelByIdx( int idx ) 
{
    if( idx < 0 || idx >= VEHICLE_ITEM_COUNT )
    {
        throw std::out_of_range( "[CScrolledVehicleListWindow] Vehicle panel index out of range!" );
    }
    else
    {
        return m_vehiclePanelItems[ idx ];
    }
}

CScrolledVehicleListItemPanel *CScrolledVehicleListWindow::operator[]( int idx ) 
{
    if( idx < 0 || idx >= VEHICLE_ITEM_COUNT )
    {
        throw std::out_of_range( "[CScrolledVehicleListWindow] Vehicle panel index out of range!" );
    }
    else
    {
        return m_vehiclePanelItems[ idx ];
    }
}

