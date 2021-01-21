///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_komis_frame.h"

///////////////////////////////////////////////////////////////////////////

IKomisFrame::IKomisFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 700,600 ), wxDefaultSize );

	m_menubar = new wxMenuBar( 0 );
	m_menu_file = new wxMenu();
	wxMenuItem* m_menu_file_menuItem_close;
	m_menu_file_menuItem_close = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Zakończ") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_menuItem_close );

	m_menubar->Append( m_menu_file, _("Plik") );

	m_menu_help = new wxMenu();
	wxMenuItem* m_menu_help_menuItem_displayDescription;
	m_menu_help_menuItem_displayDescription = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("O programie Komis...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menu_help_menuItem_displayDescription );

	m_menubar->Append( m_menu_help, _("Pomoc") );

	this->SetMenuBar( m_menubar );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_notebook_pageGeneral = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( m_notebook_pageGeneral, wxID_ANY, _("Placeholder to be deleted later"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer3->Add( m_staticText1, 0, wxALL, 5 );

	m_button1 = new wxButton( m_notebook_pageGeneral, wxID_ANY, _("Dodaj pojazd"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button1, 0, wxALL|wxEXPAND, 5 );

	m_notebook_pageGeneral_panel = new wxPanel( m_notebook_pageGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer3->Add( m_notebook_pageGeneral_panel, 1, wxEXPAND | wxALL, 5 );


	m_notebook_pageGeneral->SetSizer( bSizer3 );
	m_notebook_pageGeneral->Layout();
	bSizer3->Fit( m_notebook_pageGeneral );
	m_notebook->AddPage( m_notebook_pageGeneral, _("Strona startowa"), true );
	m_notebook_pageVehicles = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_notebook_pageVehicles_panel = new CScrolledVehicleListPanel( m_notebook_pageVehicles, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer6->Add( m_notebook_pageVehicles_panel, 1, wxEXPAND | wxALL, 5 );


	m_notebook_pageVehicles->SetSizer( bSizer6 );
	m_notebook_pageVehicles->Layout();
	bSizer6->Fit( m_notebook_pageVehicles );
	m_notebook->AddPage( m_notebook_pageVehicles, _("Pojazdy"), false );

	bSizer2->Add( m_notebook, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnClose ), this, m_menu_file_menuItem_close->GetId());
	m_menu_help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnDisplayAbout ), this, m_menu_help_menuItem_displayDescription->GetId());
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IKomisFrame::OnAddVehicleButtonClicked ), NULL, this );
}

IKomisFrame::~IKomisFrame()
{
	// Disconnect Events
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IKomisFrame::OnAddVehicleButtonClicked ), NULL, this );

}
