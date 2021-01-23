#ifndef __SCROLLED_VEHICLE_LIST_ITEM_PANEL_H__
#define __SCROLLED_VEHICLE_LIST_ITEM_PANEL_H__


#include "../interface/i_scrolled_vehicle_list_item_panel.h"
#include "database/vehicle.hpp"

class CScrolledVehicleListItemPanel : public IScrolledVehicleListItemPanel
{
protected:
	bool m_shouldVehicleBeDeleted;
	SVehicle *m_representedVehicleHandle; 

public:
	CScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
	~CScrolledVehicleListItemPanel();

	void OnViewVehicleButtonClicked( wxCommandEvent& event ) override;
	void OnEditVehicleButtonClicked( wxCommandEvent& event ) override;
	void OnDeleteVehicleButtonClicked( wxCommandEvent& event ) override;

	void setRepresentedVehicle( SVehicle *vehicleHandle );
	SVehicle *getRepresentedVehicle();

	void setShouldVehicleBeDeleted( bool shouldBeDeleted );
	bool getShouldVehicleBeDeleted();

	void clearVehicleDataStaticTexts();
	void setVehicleDataStaticTexts();

	void clearAllStaticTexts();
	void resetLabelStaticTexts();
	
	void disableAllButtons();
	void enableAllButtons();

protected:
	void setBrandAndModelText( std::string brand, std::string model );
	void setStateText( std::string state );
	void setMileage( unsigned int mileage );
	void setEngineHorsepowerText( unsigned int horsepower );
	void setEngineCapacityText( unsigned int capacity );
	void setPriceText( float price );

	void setVehicleDeletedText();
};

#endif // __SCROLLED_VEHICLE_LIST_ITEM_PANEL_H__