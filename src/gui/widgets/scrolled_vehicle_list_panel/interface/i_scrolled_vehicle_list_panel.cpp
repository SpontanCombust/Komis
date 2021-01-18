///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_scrolled_vehicle_list_panel.h"

///////////////////////////////////////////////////////////////////////////

IScrolledVehicleListPanel::IScrolledVehicleListPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_scrolledWindow = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxHSCROLL|wxVSCROLL );
	m_scrolledWindow->SetScrollRate( 5, 5 );
	m_scrolledWindow->SetMaxSize( wxSize( -1,300 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_panel_vehicleItem01 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem01, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem02 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem02, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem03 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem03, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem04 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem04, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem05 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem05, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem06 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem06, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem07 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem07, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem08 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem08, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem09 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem09, 0, wxEXPAND | wxALL, 5 );

	m_panel_vehicleItem10 = new CScrolledVehicleListItemPanel( m_scrolledWindow, wxID_ANY, wxDefaultPosition, wxSize( -1,80 ), wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel_vehicleItem10, 0, wxEXPAND | wxALL, 5 );


	m_scrolledWindow->SetSizer( bSizer2 );
	m_scrolledWindow->Layout();
	bSizer2->Fit( m_scrolledWindow );
	bSizer1->Add( m_scrolledWindow, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_button_prevPage = new wxButton( this, wxID_ANY, _("<<"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button_prevPage, 0, wxALL, 5 );

	m_button_nextPage = new wxButton( this, wxID_ANY, _(">>"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button_nextPage, 0, wxALL, 5 );


	bSizer1->Add( bSizer7, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	// Connect Events
	m_button_prevPage->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListPanel::OnPrevPageButtonClick ), NULL, this );
	m_button_nextPage->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListPanel::OnNextPageButtonClick ), NULL, this );
}

IScrolledVehicleListPanel::~IScrolledVehicleListPanel()
{
	// Disconnect Events
	m_button_prevPage->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListPanel::OnPrevPageButtonClick ), NULL, this );
	m_button_nextPage->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListPanel::OnNextPageButtonClick ), NULL, this );

}
