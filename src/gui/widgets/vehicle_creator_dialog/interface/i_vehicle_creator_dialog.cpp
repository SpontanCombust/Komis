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

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText_vehicleType = new wxStaticText( this, wxID_ANY, _("Rodzaj pojazdu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_vehicleType->Wrap( -1 );
	fgSizer1->Add( m_staticText_vehicleType, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_vehicleTypeChoices;
	m_choice_vehicleType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 280,-1 ), m_choice_vehicleTypeChoices, 0 );
	m_choice_vehicleType->SetSelection( 0 );
	fgSizer1->Add( m_choice_vehicleType, 0, wxALL, 5 );

	m_staticText_brand = new wxStaticText( this, wxID_ANY, _("Marka"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_brand->Wrap( -1 );
	fgSizer1->Add( m_staticText_brand, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_brand = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_brand, 0, wxALL|wxEXPAND, 5 );

	m_staticText_model = new wxStaticText( this, wxID_ANY, _("Model"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_model->Wrap( -1 );
	fgSizer1->Add( m_staticText_model, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_model = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_model, 0, wxALL|wxEXPAND, 5 );


	fgSizer1->Add( 0, 20, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_fuelType = new wxStaticText( this, wxID_ANY, _("Rodzaj paliwa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_fuelType->Wrap( -1 );
	fgSizer1->Add( m_staticText_fuelType, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_fuelTypeChoices;
	m_choice_fuelType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_fuelTypeChoices, 0 );
	m_choice_fuelType->SetSelection( 0 );
	fgSizer1->Add( m_choice_fuelType, 0, wxALL|wxEXPAND, 5 );

	m_staticText_transmission = new wxStaticText( this, wxID_ANY, _("Rodzaj skrzyni biegów"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_transmission->Wrap( -1 );
	fgSizer1->Add( m_staticText_transmission, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_transmissionChoices;
	m_choice_transmission = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_transmissionChoices, 0 );
	m_choice_transmission->SetSelection( 0 );
	fgSizer1->Add( m_choice_transmission, 0, wxALL|wxEXPAND, 5 );

	m_staticText_wheelDrive = new wxStaticText( this, wxID_ANY, _("Rodzaj napędu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_wheelDrive->Wrap( -1 );
	fgSizer1->Add( m_staticText_wheelDrive, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_wheelDriveChoices;
	m_choice_wheelDrive = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_wheelDriveChoices, 0 );
	m_choice_wheelDrive->SetSelection( 1 );
	fgSizer1->Add( m_choice_wheelDrive, 0, wxALL|wxEXPAND, 5 );

	m_staticText_engineCapacity = new wxStaticText( this, wxID_ANY, _("Pojemność silnika [L]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacity->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineCapacity, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_engineCapacity = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_engineCapacity, 0, wxALL|wxEXPAND, 5 );

	m_staticText_engineHorsepower = new wxStaticText( this, wxID_ANY, _("Moc silnika [KM]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepower->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineHorsepower, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_engineHorsepower = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_engineHorsepower, 0, wxALL|wxEXPAND, 5 );

	m_staticText_doorQuantity = new wxStaticText( this, wxID_ANY, _("Ilość drzwi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_doorQuantity->Wrap( -1 );
	fgSizer1->Add( m_staticText_doorQuantity, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_doorQuantityChoices;
	m_choice_doorQuantity = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_doorQuantityChoices, 0 );
	m_choice_doorQuantity->SetSelection( 0 );
	fgSizer1->Add( m_choice_doorQuantity, 0, wxALL|wxEXPAND, 5 );


	fgSizer1->Add( 0, 20, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_price = new wxStaticText( this, wxID_ANY, _("Cena [zł]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_price->Wrap( -1 );
	fgSizer1->Add( m_staticText_price, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_price = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_price, 0, wxALL|wxEXPAND, 5 );

	m_staticText_mileage = new wxStaticText( this, wxID_ANY, _("Przebieg [km]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_mileage->Wrap( -1 );
	fgSizer1->Add( m_staticText_mileage, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_textCtrl_mileage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_mileage, 0, wxALL|wxEXPAND, 5 );

	m_staticText_color = new wxStaticText( this, wxID_ANY, _("Kolor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_color->Wrap( -1 );
	fgSizer1->Add( m_staticText_color, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_color = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_color, 0, wxALL|wxEXPAND, 5 );

	m_staticText_state = new wxStaticText( this, wxID_ANY, _("Stan techniczny"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_state->Wrap( -1 );
	fgSizer1->Add( m_staticText_state, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_state = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_state, 0, wxALL|wxEXPAND, 5 );

	m_staticText_additInfo = new wxStaticText( this, wxID_ANY, _("Dodatkowe informacje"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_additInfo->Wrap( -1 );
	fgSizer1->Add( m_staticText_additInfo, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_additInfo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,70 ), wxTE_BESTWRAP|wxTE_MULTILINE );
	fgSizer1->Add( m_textCtrl_additInfo, 0, wxALL|wxEXPAND, 5 );


	bSizer1->Add( fgSizer1, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

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
