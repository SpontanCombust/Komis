///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_vehicle_browse_panel.h"

///////////////////////////////////////////////////////////////////////////

IVehicleBrowsePanel::IVehicleBrowsePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_refresh = new wxButton( this, wxID_ANY, _("Odśwież"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_refresh, 0, wxALL, 5 );

	m_button_setFilters = new wxButton( this, wxID_ANY, _("Ustaw filtry"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_setFilters, 0, wxALL, 5 );


	bSizer1->Add( bSizer4, 0, wxEXPAND, 5 );

	m_scrolledWindow = new CScrolledVehicleListWindow( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxHSCROLL|wxVSCROLL );
	m_scrolledWindow->SetScrollRate( 5, 5 );
	m_scrolledWindow->SetMinSize( wxSize( -1,400 ) );
	m_scrolledWindow->SetMaxSize( wxSize( -1,1000 ) );

	bSizer1->Add( m_scrolledWindow, 7, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );


	bSizer7->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_prevPage = new wxButton( this, wxID_ANY, _("<<"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button_prevPage, 0, wxALL, 5 );

	m_button_nextPage = new wxButton( this, wxID_ANY, _(">>"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button_nextPage, 0, wxALL, 5 );


	bSizer7->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer7, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	// Connect Events
	m_button_refresh->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnRefreshButtonClicked ), NULL, this );
	m_button_setFilters->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnSetFiltersButtonClicked ), NULL, this );
	m_button_prevPage->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnPrevPageButtonClick ), NULL, this );
	m_button_nextPage->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnNextPageButtonClick ), NULL, this );
}

IVehicleBrowsePanel::~IVehicleBrowsePanel()
{
	// Disconnect Events
	m_button_refresh->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnRefreshButtonClicked ), NULL, this );
	m_button_setFilters->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnSetFiltersButtonClicked ), NULL, this );
	m_button_prevPage->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnPrevPageButtonClick ), NULL, this );
	m_button_nextPage->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleBrowsePanel::OnNextPageButtonClick ), NULL, this );

}
