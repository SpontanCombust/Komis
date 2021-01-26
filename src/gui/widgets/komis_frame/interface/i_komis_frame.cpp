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
	wxMenuItem* m_menu_file_new;
	m_menu_file_new = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Nowy...") ) + wxT('\t') + wxT("CTRL+n"), wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_new );

	wxMenuItem* m_menu_file_open;
	m_menu_file_open = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Otwórz...") ) + wxT('\t') + wxT("CTRL+o"), wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_open );

	wxMenuItem* m_menu_file_import;
	m_menu_file_import = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Importuj...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_import );

	wxMenuItem* m_menu_file_save;
	m_menu_file_save = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Zapisz...") ) + wxT('\t') + wxT("CTRL+s"), wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_save );

	wxMenuItem* m_menu_file_saveAs;
	m_menu_file_saveAs = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Zapisz jako...") ) + wxT('\t') + wxT("CTRL+SHIFT+s"), wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_saveAs );

	wxMenuItem* m_menu_file_close;
	m_menu_file_close = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Zakończ") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menu_file_close );

	m_menubar->Append( m_menu_file, _("Plik") );

	m_menu_help = new wxMenu();
	wxMenuItem* m_menu_help_displayDescription;
	m_menu_help_displayDescription = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("O programie Komis...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menu_help_displayDescription );

	m_menubar->Append( m_menu_help, _("Pomoc") );

	this->SetMenuBar( m_menubar );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_notebook_pageGeneral = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxPNGHandler *handler = new wxPNGHandler;
	wxImage::AddHandler(handler);

	m_bitmap_banner = new wxStaticBitmap( m_notebook_pageGeneral, wxID_ANY, wxBitmap( wxT("../../data/komis.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_bitmap_banner, 1, wxALL|wxEXPAND, 5 );

	m_staticText1 = new wxStaticText( m_notebook_pageGeneral, wxID_ANY, _("Przejdź do sekcji \"Pojazdy\" by zarządzać pojazdami"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( 20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer3->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	m_notebook_pageGeneral->SetSizer( bSizer3 );
	m_notebook_pageGeneral->Layout();
	bSizer3->Fit( m_notebook_pageGeneral );
	m_notebook->AddPage( m_notebook_pageGeneral, _("Strona startowa"), true );
	m_notebook_pageVehicles = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_notebook_pageVehicles_panel = new CVehicleBrowsePanel( m_notebook_pageVehicles, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
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
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( IKomisFrame::OnClose ) );
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnNewDatabase ), this, m_menu_file_new->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnOpenDatabase ), this, m_menu_file_open->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnImportDatabase ), this, m_menu_file_import->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnSaveDatabase ), this, m_menu_file_save->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnSaveDatabaseAs ), this, m_menu_file_saveAs->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnClose ), this, m_menu_file_close->GetId());
	m_menu_help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( IKomisFrame::OnDisplayAbout ), this, m_menu_help_displayDescription->GetId());
}

IKomisFrame::~IKomisFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( IKomisFrame::OnClose ) );

}
