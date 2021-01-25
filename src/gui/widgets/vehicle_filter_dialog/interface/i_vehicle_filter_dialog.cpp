///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_vehicle_filter_dialog.h"

///////////////////////////////////////////////////////////////////////////

IVehicleFilterDialog::IVehicleFilterDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 550,800 ), wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText_info = new wxStaticText( this, wxID_ANY, _("Podaj parametry"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_info->Wrap( -1 );
	fgSizer1->Add( m_staticText_info, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText21 = new wxStaticText( this, wxID_ANY, _("według których chcesz wyszukać pojazd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	fgSizer1->Add( m_staticText21, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_LEFT|wxALL, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_vehicleType = new wxStaticText( this, wxID_ANY, _("Rodzaj pojazdu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_vehicleType->Wrap( -1 );
	fgSizer1->Add( m_staticText_vehicleType, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	wxArrayString m_choice_vehicleTypeChoices;
	m_choice_vehicleType = new CVehicleTypeChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 280,-1 ), m_choice_vehicleTypeChoices, 0 );
	m_choice_vehicleType->SetSelection( 0 );
	fgSizer1->Add( m_choice_vehicleType, 0, wxALL, 5 );

	m_checkBox_vehicleType = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_vehicleType, 0, wxALL, 5 );

	m_staticText_brand = new wxStaticText( this, wxID_ANY, _("Marka"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_brand->Wrap( -1 );
	fgSizer1->Add( m_staticText_brand, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_brand = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_brand, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_brand = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_brand, 0, wxALL, 5 );

	m_staticText_model = new wxStaticText( this, wxID_ANY, _("Model"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_model->Wrap( -1 );
	fgSizer1->Add( m_staticText_model, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_model = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer1->Add( m_textCtrl_model, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_model = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_model, 0, wxALL, 5 );


	fgSizer1->Add( 0, 20, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_fuelType = new wxStaticText( this, wxID_ANY, _("Rodzaj paliwa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_fuelType->Wrap( -1 );
	fgSizer1->Add( m_staticText_fuelType, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_fuelTypeChoices;
	m_choice_fuelType = new CVehicleFuelChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_fuelTypeChoices, 0 );
	m_choice_fuelType->SetSelection( 0 );
	fgSizer1->Add( m_choice_fuelType, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_fuelType = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_fuelType, 0, wxALL, 5 );

	m_staticText_transmission = new wxStaticText( this, wxID_ANY, _("Rodzaj skrzyni biegów"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_transmission->Wrap( -1 );
	fgSizer1->Add( m_staticText_transmission, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_transmissionChoices;
	m_choice_transmission = new CVehicleTransmissionChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_transmissionChoices, 0 );
	m_choice_transmission->SetSelection( 0 );
	fgSizer1->Add( m_choice_transmission, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_transmission = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_transmission, 0, wxALL, 5 );

	m_staticText_wheelDrive = new wxStaticText( this, wxID_ANY, _("Rodzaj napędu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_wheelDrive->Wrap( -1 );
	fgSizer1->Add( m_staticText_wheelDrive, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_wheelDriveChoices;
	m_choice_wheelDrive = new CVehicleWheelDriveChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_wheelDriveChoices, 0 );
	m_choice_wheelDrive->SetSelection( 1 );
	fgSizer1->Add( m_choice_wheelDrive, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_wheelDrive = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_wheelDrive, 0, wxALL, 5 );

	m_staticText_engineCapacityMin = new wxStaticText( this, wxID_ANY, _("Pojemność silnika od [L]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacityMin->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineCapacityMin, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_engineCapacityMin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_textCtrl_engineCapacityMin->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &validator_engineCapacityMin ) );

	fgSizer1->Add( m_textCtrl_engineCapacityMin, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_engineCapacityMin = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_engineCapacityMin, 0, wxALL, 5 );

	m_staticText_engineCapacityMax = new wxStaticText( this, wxID_ANY, _("Pojemność silnika do [L]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacityMax->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineCapacityMax, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_textCtrl_engineCapacityMax = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_textCtrl_engineCapacityMax->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &validator_engineCapacityMax ) );

	fgSizer1->Add( m_textCtrl_engineCapacityMax, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_engineCapacityMax = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_engineCapacityMax, 0, wxALL, 5 );

	m_staticText_engineHorsepowerMin = new wxStaticText( this, wxID_ANY, _("Moc silnika od [KM]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepowerMin->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineHorsepowerMin, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_engineHorsepowerMin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_textCtrl_engineHorsepowerMin->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &validator_engineHorsepowerMin ) );

	fgSizer1->Add( m_textCtrl_engineHorsepowerMin, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_engineHorsepowerMin = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_engineHorsepowerMin, 0, wxALL, 5 );

	m_staticText_engineHorsepowerMax = new wxStaticText( this, wxID_ANY, _("Moc silnika do [KM]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepowerMax->Wrap( -1 );
	fgSizer1->Add( m_staticText_engineHorsepowerMax, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_textCtrl_engineHorsepowerMax = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_textCtrl_engineHorsepowerMax->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &validator_engineHorsepowerMax ) );

	fgSizer1->Add( m_textCtrl_engineHorsepowerMax, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_engineHorsepowerMax = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_engineHorsepowerMax, 0, wxALL, 5 );

	m_staticText_doorQuantity = new wxStaticText( this, wxID_ANY, _("Ilość drzwi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_doorQuantity->Wrap( -1 );
	fgSizer1->Add( m_staticText_doorQuantity, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choice_doorQuantityChoices;
	m_choice_doorQuantity = new CVehicleDoorQuantityChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice_doorQuantityChoices, 0 );
	m_choice_doorQuantity->SetSelection( 0 );
	fgSizer1->Add( m_choice_doorQuantity, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_doorQuantity = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_doorQuantity, 0, wxALL, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 20, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText_priceMin = new wxStaticText( this, wxID_ANY, _("Cena od [zł]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_priceMin->Wrap( -1 );
	fgSizer1->Add( m_staticText_priceMin, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_priceMin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_priceMin, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_priceMin = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_priceMin, 0, wxALL, 5 );

	m_staticText_priceMax = new wxStaticText( this, wxID_ANY, _("Cena do [zł]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_priceMax->Wrap( -1 );
	fgSizer1->Add( m_staticText_priceMax, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_textCtrl_priceMax = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_priceMax, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_priceMax = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_priceMax, 0, wxALL, 5 );

	m_staticText_mileageMin = new wxStaticText( this, wxID_ANY, _("Przebieg od [km]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_mileageMin->Wrap( -1 );
	fgSizer1->Add( m_staticText_mileageMin, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_textCtrl_mileageMin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_mileageMin, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_mileageMin = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_mileageMin, 0, wxALL, 5 );

	m_staticText_mileageMax = new wxStaticText( this, wxID_ANY, _("Przebieg od [km]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_mileageMax->Wrap( -1 );
	fgSizer1->Add( m_staticText_mileageMax, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );

	m_textCtrl_mileageMax = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_mileageMax, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_mileageMax = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_mileageMax, 0, wxALL, 5 );

	m_staticText_color = new wxStaticText( this, wxID_ANY, _("Kolor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_color->Wrap( -1 );
	fgSizer1->Add( m_staticText_color, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_color = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_color, 0, wxALL|wxEXPAND, 5 );

	m_checkBox_color = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox_color, 0, wxALL, 5 );

	m_staticText_state = new wxStaticText( this, wxID_ANY, _("Stan techniczny"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_state->Wrap( -1 );
	fgSizer1->Add( m_staticText_state, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_state = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl_state, 0, wxALL|wxEXPAND, 5 );

	checkBox_state = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( checkBox_state, 0, wxALL, 5 );


	bSizer1->Add( fgSizer1, 10, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer2->Add( 0, 20, 1, wxEXPAND, 5 );

	m_button_searchSubmitVehicle = new wxButton( this, wxID_ANY, _("Wyszukaj"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer2->Add( m_button_searchSubmitVehicle, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button_cancel = new wxButton( this, wxID_ANY, _("Anuluj"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer2->Add( m_button_cancel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_checkBox_vehicleType->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_vehicleTypeChecked ), NULL, this );
	m_checkBox_brand->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_brandChecked ), NULL, this );
	m_checkBox_model->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_modelChecked ), NULL, this );
	m_checkBox_fuelType->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_fuelTypeChecked ), NULL, this );
	m_checkBox_transmission->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_transmissionChecked ), NULL, this );
	m_checkBox_wheelDrive->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_wheelDriveChecked ), NULL, this );
	m_checkBox_engineCapacityMin->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineCapacityMinChecked ), NULL, this );
	m_checkBox_engineCapacityMax->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineCapacityMaxChecked ), NULL, this );
	m_checkBox_engineHorsepowerMin->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineHorsepowerMinChecked ), NULL, this );
	m_checkBox_engineHorsepowerMax->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineHorsepowerMaxChecked ), NULL, this );
	m_checkBox_doorQuantity->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_doorQuantityChecked ), NULL, this );
	m_checkBox_priceMin->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_priceMinChecked ), NULL, this );
	m_checkBox_priceMax->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_priceMaxChecked ), NULL, this );
	m_checkBox_mileageMin->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_mileageMinChecked ), NULL, this );
	m_checkBox_mileageMax->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_mileageMaxChecked ), NULL, this );
	m_checkBox_color->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_colorChecked ), NULL, this );
	checkBox_state->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_stateChecked ), NULL, this );
	m_button_searchSubmitVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::OnSearchSubmitVehicleButtonClicked ), NULL, this );
	m_button_cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::OnCancel ), NULL, this );
}

IVehicleFilterDialog::~IVehicleFilterDialog()
{
	// Disconnect Events
	m_checkBox_vehicleType->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_vehicleTypeChecked ), NULL, this );
	m_checkBox_brand->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_brandChecked ), NULL, this );
	m_checkBox_model->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_modelChecked ), NULL, this );
	m_checkBox_fuelType->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_fuelTypeChecked ), NULL, this );
	m_checkBox_transmission->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_transmissionChecked ), NULL, this );
	m_checkBox_wheelDrive->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_wheelDriveChecked ), NULL, this );
	m_checkBox_engineCapacityMin->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineCapacityMinChecked ), NULL, this );
	m_checkBox_engineCapacityMax->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineCapacityMaxChecked ), NULL, this );
	m_checkBox_engineHorsepowerMin->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineHorsepowerMinChecked ), NULL, this );
	m_checkBox_engineHorsepowerMax->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_engineHorsepowerMaxChecked ), NULL, this );
	m_checkBox_doorQuantity->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_doorQuantityChecked ), NULL, this );
	m_checkBox_priceMin->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_priceMinChecked ), NULL, this );
	m_checkBox_priceMax->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_priceMaxChecked ), NULL, this );
	m_checkBox_mileageMin->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_mileageMinChecked ), NULL, this );
	m_checkBox_mileageMax->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_mileageMaxChecked ), NULL, this );
	m_checkBox_color->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_colorChecked ), NULL, this );
	checkBox_state->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::checkBox_stateChecked ), NULL, this );
	m_button_searchSubmitVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::OnSearchSubmitVehicleButtonClicked ), NULL, this );
	m_button_cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IVehicleFilterDialog::OnCancel ), NULL, this );

}
