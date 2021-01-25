///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_vehicle_edit_dialog.h"

///////////////////////////////////////////////////////////////////////////

IVehicleEditDialog::IVehicleEditDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 550,800 ), wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_panel_vehicleInsertData = new CVehicleDataInsertionPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer3->Add( m_panel_vehicleInsertData, 8, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	edit_button = new wxButton( this, wxID_ANY, wxT("Edytuj"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer2->Add( edit_button, 0, wxALL|wxLEFT, 5 );

	close_button = new wxButton( this, wxID_ANY, wxT("Anuluj"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer2->Add( close_button, 0, wxALL|wxRIGHT, 5 );


	bSizer3->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();
	bSizer3->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	edit_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleEditDialog::OnEditButtonClicked ), NULL, this );
	close_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleEditDialog::OnCloseButtonClicked ), NULL, this );
}

IVehicleEditDialog::~IVehicleEditDialog()
{
	// Disconnect Events
	edit_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleEditDialog::OnEditButtonClicked ), NULL, this );
	close_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleEditDialog::OnCloseButtonClicked ), NULL, this );

}
