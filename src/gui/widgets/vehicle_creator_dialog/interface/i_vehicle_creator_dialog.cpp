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
	this->SetSizeHints( wxSize( -1,800 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText_vehicleType = new wxStaticText( this, wxID_ANY, wxT("Rodzaj pojazdu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_vehicleType->Wrap( -1 );
	fgSizer1->Add( m_staticText_vehicleType, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_vehicleTypeChoices[] = { wxT("Samochód osobowy"), wxT("Motocykl"), wxT("SUV"), wxT("VAN"), wxT("Ciężarówka"), wxEmptyString };
	int m_choice_vehicleTypeNChoices = sizeof( m_choice_vehicleTypeChoices ) / sizeof( wxString );
	m_choice_vehicleType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 280,-1 ), m_choice_vehicleTypeNChoices, m_choice_vehicleTypeChoices, 0 );
	m_choice_vehicleType->SetSelection( 0 );
	fgSizer1->Add( m_choice_vehicleType, 0, wxALL, 5 );

	m_staticText_brand = new wxStaticText( this, wxID_ANY, wxT("Marka"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_brand->Wrap( -1 );
	fgSizer1->Add( m_staticText_brand, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_brand = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_brand, 0, wxALL|wxEXPAND, 5 );

	m_staticText_model = new wxStaticText( this, wxID_ANY, wxT("Model"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_model->Wrap( -1 );
	fgSizer1->Add( m_staticText_model, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_model = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_model, 0, wxALL|wxEXPAND, 5 );


	fgSizer1->Add( 0, 20, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_fuelType = new wxStaticText( this, wxID_ANY, wxT("Rodzaj paliwa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_fuelType->Wrap( -1 );
	fgSizer1->Add( m_staticText_fuelType, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_fuelTypeChoices[] = { wxT("Benzyna"), wxT("Diesel"), wxT("LPG"), wxT("Elektryk") };
	int m_choice_fuelTypeNChoices = sizeof( m_choice_fuelTypeChoices ) / sizeof( wxString );
	m_choice_fuelType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_fuelTypeNChoices, m_choice_fuelTypeChoices, 0 );
	m_choice_fuelType->SetSelection( 0 );
	fgSizer1->Add( m_choice_fuelType, 0, wxALL|wxEXPAND, 5 );

	m_staticText_transmission = new wxStaticText( this, wxID_ANY, wxT("Rodzaj skrzyni biegów"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_transmission->Wrap( -1 );
	fgSizer1->Add( m_staticText_transmission, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_transmissionChoices[] = { wxT("Manualna"), wxT("Automatyczna") };
	int m_choice_transmissionNChoices = sizeof( m_choice_transmissionChoices ) / sizeof( wxString );
	m_choice_transmission = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_transmissionNChoices, m_choice_transmissionChoices, 0 );
	m_choice_transmission->SetSelection( 0 );
	fgSizer1->Add( m_choice_transmission, 0, wxALL|wxEXPAND, 5 );

	m_staticText_wheelDrive = new wxStaticText( this, wxID_ANY, wxT("Rodzaj napędu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_wheelDrive->Wrap( -1 );
	fgSizer1->Add( m_staticText_wheelDrive, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_wheelDriveChoices[] = { wxT("Na przednie koła"), wxT("Na tylnie koła"), wxT("4x4") };
	int m_choice_wheelDriveNChoices = sizeof( m_choice_wheelDriveChoices ) / sizeof( wxString );
	m_choice_wheelDrive = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_wheelDriveNChoices, m_choice_wheelDriveChoices, 0 );
	m_choice_wheelDrive->SetSelection( 1 );
	fgSizer1->Add( m_choice_wheelDrive, 0, wxALL|wxEXPAND, 5 );

	m_staticText_engineCapacity = new wxStaticText( this, wxID_ANY, wxT("Pojemność silnika [L]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacity->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineCapacity, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_engineCapacity = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_engineCapacity, 0, wxALL|wxEXPAND, 5 );

	m_staticText_engineHorsepower = new wxStaticText( this, wxID_ANY, wxT("Moc silnika [KM]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepower->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineHorsepower, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_engineHorsepower = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_engineHorsepower, 0, wxALL|wxEXPAND, 5 );

	m_staticText_doorQuantity = new wxStaticText( this, wxID_ANY, wxT("Ilość drzwi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_doorQuantity->Wrap( -1 );
	fgSizer1->Add( m_staticText_doorQuantity, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_doorQuantityChoices[] = { wxT("3"), wxT("5"), wxT("brak") };
	int m_choice_doorQuantityNChoices = sizeof( m_choice_doorQuantityChoices ) / sizeof( wxString );
	m_choice_doorQuantity = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_doorQuantityNChoices, m_choice_doorQuantityChoices, 0 );
	m_choice_doorQuantity->SetSelection( 0 );
	fgSizer1->Add( m_choice_doorQuantity, 0, wxALL|wxEXPAND, 5 );


	fgSizer1->Add( 0, 20, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_price = new wxStaticText( this, wxID_ANY, wxT("Cena [zł]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_price->Wrap( -1 );
	fgSizer1->Add( m_staticText_price, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_price = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_price, 0, wxALL|wxEXPAND, 5 );

	m_staticText_mileage = new wxStaticText( this, wxID_ANY, wxT("Przebieg [km]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_mileage->Wrap( -1 );
	fgSizer1->Add( m_staticText_mileage, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_textCtrl_mileage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_mileage, 0, wxALL|wxEXPAND, 5 );

	m_staticText_color = new wxStaticText( this, wxID_ANY, wxT("Kolor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_color->Wrap( -1 );
	fgSizer1->Add( m_staticText_color, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_color = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_color, 0, wxALL|wxEXPAND, 5 );

	m_staticText_state = new wxStaticText( this, wxID_ANY, wxT("Stan techniczny"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_state->Wrap( -1 );
	fgSizer1->Add( m_staticText_state, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_state = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_state, 0, wxALL|wxEXPAND, 5 );

	m_staticText_additInfo = new wxStaticText( this, wxID_ANY, wxT("Dodatkowe informacje"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_additInfo->Wrap( -1 );
	fgSizer1->Add( m_staticText_additInfo, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_additInfo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,70 ), wxTE_BESTWRAP|wxTE_MULTILINE );
	fgSizer1->Add( m_textCtrl_additInfo, 0, wxALL|wxEXPAND, 5 );


	bSizer1->Add( fgSizer1, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer1->Add( 0, 20, 0, wxEXPAND, 5 );

	m_button_submitVehicle = new wxButton( this, wxID_ANY, wxT("Dodaj"), wxDefaultPosition, wxSize( 300,-1 ), 0 );
	bSizer1->Add( m_button_submitVehicle, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer1->Add( 0, 20, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button_submitVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleCreatorDialog::OnSubmitVehicleButtonClicked ), NULL, this );
}

IVehicleCreatorDialog::~IVehicleCreatorDialog()
{
	// Disconnect Events
	m_button_submitVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleCreatorDialog::OnSubmitVehicleButtonClicked ), NULL, this );

}
