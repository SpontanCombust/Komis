///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_vehicle_creator_dialog.h"

///////////////////////////////////////////////////////////////////////////

IVehicleCreatorDialog::IVehicleCreatorDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 550,800 ), wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_panel_vehicleInsertData = new CVehicleInsertDataPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer1->Add( m_panel_vehicleInsertData, 8, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer2->Add( 0, 20, 1, wxEXPAND, 5 );

	m_button_submitVehicle = new wxButton( this, wxID_ANY, _("Dodaj"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer2->Add( m_button_submitVehicle, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button_cancel = new wxButton( this, wxID_ANY, _("Anuluj"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer2->Add( m_button_cancel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button_submitVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleCreatorDialog::OnSubmitVehicleButtonClicked ), NULL, this );
	m_button_cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleCreatorDialog::OnCancel ), NULL, this );
}

IVehicleCreatorDialog::~IVehicleCreatorDialog()
{
	// Disconnect Events
	m_button_submitVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleCreatorDialog::OnSubmitVehicleButtonClicked ), NULL, this );
	m_button_cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleCreatorDialog::OnCancel ), NULL, this );

}
