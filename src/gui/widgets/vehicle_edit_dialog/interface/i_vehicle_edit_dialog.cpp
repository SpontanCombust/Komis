///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_vehicle_edit_dialog.h"

///////////////////////////////////////////////////////////////////////////

VehicleEditDialog::VehicleEditDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 1, 3, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	staticText_VehicleType = new wxStaticText( this, wxID_ANY, wxT("Rodzaj pojazdu:"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_VehicleType->Wrap( -1 );
	staticText_VehicleType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_VehicleType, 0, wxALL, 5 );

	m_staticText_VehicleType = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_VehicleType->Wrap( -1 );
	m_staticText_VehicleType->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_VehicleType->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_VehicleType->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_VehicleType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_VehicleType, 0, wxALL, 5 );

	wxArrayString m_choice_vehicleTypeChoices;
	m_choice_vehicleType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_vehicleTypeChoices, 0 );
	m_choice_vehicleType->SetSelection( 0 );
	m_choice_vehicleType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_choice_vehicleType, 0, wxALL, 5 );

	staticText_brand = new wxStaticText( this, wxID_ANY, wxT("Marka"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_brand->Wrap( -1 );
	staticText_brand->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_brand, 0, wxALL, 5 );

	m_staticText_brand = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_brand->Wrap( -1 );
	m_staticText_brand->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_brand->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_brand->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_brand->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_brand, 0, wxALL, 5 );

	m_textCtrl_brand = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_brand->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_brand, 0, wxALL, 5 );

	staticText_model = new wxStaticText( this, wxID_ANY, wxT("Model:"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_model->Wrap( -1 );
	staticText_model->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_model, 0, wxALL, 5 );

	m_staticText_model = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_model->Wrap( -1 );
	m_staticText_model->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_model->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_model->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_model->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_model, 0, wxALL, 5 );

	m_textCtrl_model = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_model->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_model, 0, wxALL, 5 );

	staticText_fuelType = new wxStaticText( this, wxID_ANY, wxT("Rodzaj paliwa"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_fuelType->Wrap( -1 );
	staticText_fuelType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_fuelType, 0, wxALL, 5 );

	m_staticText_fuelType = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_fuelType->Wrap( -1 );
	m_staticText_fuelType->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_fuelType->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_fuelType->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_fuelType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_fuelType, 0, wxALL, 5 );

	wxArrayString m_choice_fuelTypeChoices;
	m_choice_fuelType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_fuelTypeChoices, 0 );
	m_choice_fuelType->SetSelection( 0 );
	m_choice_fuelType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_choice_fuelType, 0, wxALL, 5 );

	staticText_wheelDriveType = new wxStaticText( this, wxID_ANY, wxT("Rodzaj skrzyni biegów"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_wheelDriveType->Wrap( -1 );
	staticText_wheelDriveType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_wheelDriveType, 0, wxALL, 5 );

	m_staticText_transmissionType = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_transmissionType->Wrap( -1 );
	m_staticText_transmissionType->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_transmissionType->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_transmissionType->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_transmissionType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_transmissionType, 0, wxALL, 5 );

	wxArrayString m_choice_transmissionChoices;
	m_choice_transmission = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_transmissionChoices, 0 );
	m_choice_transmission->SetSelection( 0 );
	m_choice_transmission->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_choice_transmission, 0, wxALL, 5 );

	staticText_transmissionType = new wxStaticText( this, wxID_ANY, wxT("Rodzaj napędu"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_transmissionType->Wrap( -1 );
	staticText_transmissionType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_transmissionType, 0, wxALL, 5 );

	m_staticText_wheelDriveType = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_wheelDriveType->Wrap( -1 );
	m_staticText_wheelDriveType->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_wheelDriveType->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_wheelDriveType->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_wheelDriveType->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_wheelDriveType, 0, wxALL, 5 );

	wxArrayString m_choice_wheelDriveChoices;
	m_choice_wheelDrive = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_wheelDriveChoices, 0 );
	m_choice_wheelDrive->SetSelection( 0 );
	m_choice_wheelDrive->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_choice_wheelDrive, 0, wxALL, 5 );

	staticText_engineCapacity = new wxStaticText( this, wxID_ANY, wxT("Pojemność silnika"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_engineCapacity->Wrap( -1 );
	staticText_engineCapacity->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Unicode MS") ) );
	staticText_engineCapacity->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_engineCapacity, 0, wxALL, 5 );

	m_staticText_engineCapacity = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacity->Wrap( -1 );
	m_staticText_engineCapacity->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_engineCapacity->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_engineCapacity->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_engineCapacity->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_engineCapacity, 0, wxALL, 5 );

	m_textCtrl_engineCapacity = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_engineCapacity->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_engineCapacity, 0, wxALL, 5 );

	staticText_engineHorsepower = new wxStaticText( this, wxID_ANY, wxT("Moc silnika"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_engineHorsepower->Wrap( -1 );
	staticText_engineHorsepower->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_engineHorsepower, 0, wxALL, 5 );

	m_staticText_engineHorsepower = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepower->Wrap( -1 );
	m_staticText_engineHorsepower->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_engineHorsepower->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_engineHorsepower->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_engineHorsepower->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_engineHorsepower, 0, wxALL, 5 );

	m_textCtrl_engineHorsepower = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_engineHorsepower->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_engineHorsepower, 0, wxALL, 5 );

	staticText_doorQuantity = new wxStaticText( this, wxID_ANY, wxT("Ilość dzwi"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_doorQuantity->Wrap( -1 );
	staticText_doorQuantity->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_doorQuantity, 0, wxALL, 5 );

	m_staticText_doorQuantity = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_doorQuantity->Wrap( -1 );
	m_staticText_doorQuantity->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_doorQuantity->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_doorQuantity->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_doorQuantity->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_doorQuantity, 0, wxALL, 5 );

	wxArrayString m_choice_doorQuantityChoices;
	m_choice_doorQuantity = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_doorQuantityChoices, 0 );
	m_choice_doorQuantity->SetSelection( 0 );
	m_choice_doorQuantity->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_choice_doorQuantity, 0, wxALL, 5 );

	staticText_price = new wxStaticText( this, wxID_ANY, wxT("Cena "), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_price->Wrap( -1 );
	staticText_price->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_price, 0, wxALL, 5 );

	m_staticText_price = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_price->Wrap( -1 );
	m_staticText_price->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_price->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_price->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_price->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_price, 0, wxALL, 5 );

	m_textCtrl_price = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_price->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_price, 0, wxALL, 5 );

	staticText_milleage = new wxStaticText( this, wxID_ANY, wxT("Przebieg "), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_milleage->Wrap( -1 );
	staticText_milleage->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_milleage, 0, wxALL, 5 );

	m_staticText_milleage = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_milleage->Wrap( -1 );
	m_staticText_milleage->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_milleage->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_milleage->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_milleage->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_milleage, 0, wxALL, 5 );

	m_textCtrl_milleage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_milleage->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_milleage, 0, wxALL, 5 );

	staticText_color = new wxStaticText( this, wxID_ANY, wxT("Kolor"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_color->Wrap( -1 );
	staticText_color->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_color, 0, wxALL, 5 );

	m_staticText_color = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_color->Wrap( -1 );
	m_staticText_color->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial Unicode MS") ) );
	m_staticText_color->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_color->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_color->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_color, 0, wxALL, 5 );

	m_textCtrl_color = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_color->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_color, 0, wxALL, 5 );

	staticText_state = new wxStaticText( this, wxID_ANY, wxT("Stan techniczny"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_state->Wrap( -1 );
	staticText_state->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( staticText_state, 0, wxALL, 5 );

	m_staticText_state = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_state->Wrap( -1 );
	m_staticText_state->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_state->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_state->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_state->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_staticText_state, 0, wxALL, 5 );

	m_textCtrl_state = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_state->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_state, 0, wxALL, 5 );

	staticText_additionalInformation = new wxStaticText( this, wxID_ANY, wxT("Dodatkowe informacje"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText_additionalInformation->Wrap( -1 );
	staticText_additionalInformation->SetMinSize( wxSize( 150,50 ) );

	fgSizer2->Add( staticText_additionalInformation, 0, wxALL, 5 );

	m_staticText_additionalInformation = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_additionalInformation->Wrap( -1 );
	m_staticText_additionalInformation->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@Arial Unicode MS") ) );
	m_staticText_additionalInformation->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_staticText_additionalInformation->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_staticText_additionalInformation->SetMinSize( wxSize( 150,50 ) );

	fgSizer2->Add( m_staticText_additionalInformation, 0, wxALL, 5 );

	m_textCtrl_additionalInformation = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_additionalInformation->SetMinSize( wxSize( 150,25 ) );

	fgSizer2->Add( m_textCtrl_additionalInformation, 0, wxALL, 5 );


	bSizer3->Add( fgSizer2, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 1, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	edit_button = new wxButton( this, wxID_ANY, wxT("Edytuj"), wxDefaultPosition, wxDefaultSize, 0 );
	edit_button->SetMinSize( wxSize( 225,25 ) );

	fgSizer3->Add( edit_button, 0, wxALL|wxLEFT, 5 );

	close_button = new wxButton( this, wxID_ANY, wxT("Anuluj"), wxDefaultPosition, wxDefaultSize, 0 );
	close_button->SetMinSize( wxSize( 225,25 ) );

	fgSizer3->Add( close_button, 0, wxALL|wxRIGHT, 5 );


	bSizer3->Add( fgSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	edit_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VehicleEditDialog::OnEditButtonClicked ), NULL, this );
	close_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VehicleEditDialog::OnCloseButtonClicked ), NULL, this );
}

VehicleEditDialog::~VehicleEditDialog()
{
	// Disconnect Events
	edit_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VehicleEditDialog::OnEditButtonClicked ), NULL, this );
	close_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VehicleEditDialog::OnCloseButtonClicked ), NULL, this );

}
