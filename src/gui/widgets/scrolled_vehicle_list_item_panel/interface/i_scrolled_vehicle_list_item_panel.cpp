///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "i_scrolled_vehicle_list_item_panel.h"

///////////////////////////////////////////////////////////////////////////

IScrolledVehicleListItemPanel::IScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetMinSize( wxSize( -1,150 ) );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );


	bSizer101->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_viewVehicle = new wxButton( this, wxID_ANY, _("Pokaż"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_button_viewVehicle, 0, wxALL, 5 );

	m_button_editVehicle = new wxButton( this, wxID_ANY, _("Edytuj"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_button_editVehicle, 0, wxALL, 5 );

	m_button_deleteVehicle = new wxButton( this, wxID_ANY, _("Usuń"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_button_deleteVehicle, 0, wxALL, 5 );


	bSizer101->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer101, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_staticText_brandAndModel = new wxStaticText( this, wxID_ANY, _("markaModelTekst"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_brandAndModel->Wrap( -1 );
	m_staticText_brandAndModel->SetFont( wxFont( 20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer9->Add( m_staticText_brandAndModel, 4, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 10 );


	bSizer91->Add( bSizer9, 3, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_stateLabel = new wxStaticText( this, wxID_ANY, _("Stan:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_stateLabel->Wrap( -1 );
	bSizer11->Add( m_staticText_stateLabel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_state = new wxStaticText( this, wxID_ANY, _("stanTekst"), wxDefaultPosition, wxDefaultSize, wxST_ELLIPSIZE_END );
	m_staticText_state->Wrap( -1 );
	m_staticText_state->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer11->Add( m_staticText_state, 1, wxALIGN_CENTER_VERTICAL|wxALL, 0 );


	bSizer10->Add( bSizer11, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_mileageLabel = new wxStaticText( this, wxID_ANY, _("Przebieg:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_mileageLabel->Wrap( -1 );
	bSizer12->Add( m_staticText_mileageLabel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_mileage = new wxStaticText( this, wxID_ANY, _("przebiegTekst"), wxDefaultPosition, wxDefaultSize, wxST_ELLIPSIZE_END );
	m_staticText_mileage->Wrap( -1 );
	m_staticText_mileage->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer12->Add( m_staticText_mileage, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer10->Add( bSizer12, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT|wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_engineHorsepowerLabel = new wxStaticText( this, wxID_ANY, _("Moc silnika:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepowerLabel->Wrap( -1 );
	bSizer14->Add( m_staticText_engineHorsepowerLabel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_engineHorsepower = new wxStaticText( this, wxID_ANY, _("mocTekst"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineHorsepower->Wrap( -1 );
	m_staticText_engineHorsepower->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer14->Add( m_staticText_engineHorsepower, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer10->Add( bSizer14, 1, wxEXPAND|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_engineCapacityLabel = new wxStaticText( this, wxID_ANY, _("Pojemność silnika:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacityLabel->Wrap( -1 );
	bSizer13->Add( m_staticText_engineCapacityLabel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_engineCapacity = new wxStaticText( this, wxID_ANY, _("pojemnośćTekst"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_engineCapacity->Wrap( -1 );
	m_staticText_engineCapacity->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer13->Add( m_staticText_engineCapacity, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer10->Add( bSizer13, 1, wxRIGHT|wxLEFT|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer91->Add( bSizer10, 2, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_staticText_price = new wxStaticText( this, wxID_ANY, _("cenaTekst"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_price->Wrap( -1 );
	m_staticText_price->SetFont( wxFont( 30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer15->Add( m_staticText_price, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer91->Add( bSizer15, 4, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );


	bSizer8->Add( bSizer91, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();
	bSizer8->Fit( this );

	// Connect Events
	m_button_viewVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListItemPanel::OnViewVehicleButtonClicked ), NULL, this );
	m_button_editVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListItemPanel::OnEditVehicleButtonClicked ), NULL, this );
	m_button_deleteVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListItemPanel::OnDeleteVehicleButtonClicked ), NULL, this );
}

IScrolledVehicleListItemPanel::~IScrolledVehicleListItemPanel()
{
	// Disconnect Events
	m_button_viewVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListItemPanel::OnViewVehicleButtonClicked ), NULL, this );
	m_button_editVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListItemPanel::OnEditVehicleButtonClicked ), NULL, this );
	m_button_deleteVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IScrolledVehicleListItemPanel::OnDeleteVehicleButtonClicked ), NULL, this );

}
