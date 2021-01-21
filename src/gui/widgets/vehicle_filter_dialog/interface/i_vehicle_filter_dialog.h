///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/dialog.h>

class IVehicleFilterDialog : public wxDialog
{
private:

protected:
	wxStaticText* m_staticText_info;
	wxStaticText* m_staticText21;
	wxStaticText* m_staticText_vehicleType;
	wxChoice* m_choice_vehicleType;
	wxCheckBox* m_checkBox_vehicleType;
	wxStaticText* m_staticText_brand;
	wxTextCtrl* m_textCtrl_brand;
	wxCheckBox* m_checkBox_brand;
	wxStaticText* m_staticText_model;
	wxTextCtrl* m_textCtrl_model;
	wxCheckBox* m_checkBox_model;
	wxStaticText* m_staticText_fuelType;
	wxChoice* m_choice_fuelType;
	wxCheckBox* m_checkBox_fuelType;
	wxStaticText* m_staticText_transmission;
	wxChoice* m_choice_transmission;
	wxCheckBox* m_checkBox_transmission;
	wxStaticText* m_staticText_wheelDrive;
	wxChoice* m_choice_wheelDrive;
	wxCheckBox* m_checkBox_wheelDrive;
	wxStaticText* m_staticText_engineCapacityMin;
	wxTextCtrl* m_textCtrl_engineCapacityMin;
	wxCheckBox* m_checkBox_engineCapacityMin;
	wxStaticText* m_staticText_engineCapacityMax;
	wxTextCtrl* m_textCtrl_engineCapacityMax;
	wxCheckBox* m_checkBox_engineCapacityMax;
	wxStaticText* m_staticText_engineHorsepowerMin;
	wxTextCtrl* m_textCtrl_engineHorsepowerMin;
	wxCheckBox* m_checkBox_engineHorsepowerMin;
	wxStaticText* m_staticText_engineHorsepowerMax;
	wxTextCtrl* m_textCtrl_engineHorsepowerMax;
	wxCheckBox* m_checkBox_engineHorsepowerMax;
	wxStaticText* m_staticText_doorQuantity;
	wxChoice* m_choice_doorQuantity;
	wxCheckBox* m_checkBox_doorQuantity;
	wxStaticText* m_staticText_priceMin;
	wxTextCtrl* m_textCtrl_priceMin;
	wxCheckBox* m_checkBox_priceMin;
	wxStaticText* m_staticText_priceMax;
	wxTextCtrl* m_textCtrl_priceMax;
	wxCheckBox* m_checkBox_priceMax;
	wxStaticText* m_staticText_mileageMin;
	wxTextCtrl* m_textCtrl_mileageMin;
	wxCheckBox* m_checkBox_mileageMin;
	wxStaticText* m_staticText_mileageMax;
	wxTextCtrl* m_textCtrl_mileageMax;
	wxCheckBox* m_checkBox_mileageMax;
	wxStaticText* m_staticText_color;
	wxTextCtrl* m_textCtrl_color;
	wxCheckBox* m_checkBox_color;
	wxStaticText* m_staticText_state;
	wxTextCtrl* m_textCtrl_state;
	wxCheckBox* checkBox_state;
	wxButton* m_button_searchSubmitVehicle;
	wxButton* m_button_cancel;

	// Virtual event handlers, overide them in your derived class
	virtual void checkBox_vehicleTypeChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_brandChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_modelChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_fuelTypeChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_transmissionChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_wheelDriveChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_engineCapacityMinChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_engineCapacityMaxChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_engineHorsepowerMinChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_engineHorsepowerMaxChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_doorQuantityChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_priceMinChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_priceMaxChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_mileageMinChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_mileageMaxChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_colorChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void checkBox_stateChecked(wxCommandEvent& event) { event.Skip(); }
	virtual void OnSearchSubmitVehicleButtonClicked(wxCommandEvent& event) { event.Skip(); }
	virtual void OnCancel(wxCommandEvent& event) { event.Skip(); }


public:

	IVehicleFilterDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Wyszukiwanie pojazdu"), const wxPoint& pos = wxPoint(-1, -1), const wxSize& size = wxSize(550, 800), long style = wxDEFAULT_DIALOG_STYLE);
	~IVehicleFilterDialog();

};

