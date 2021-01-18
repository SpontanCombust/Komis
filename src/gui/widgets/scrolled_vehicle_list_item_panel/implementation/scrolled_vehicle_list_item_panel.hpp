#ifndef __SCROLLED_VEHICLE_LIST_ITEM_PANEL_H__
#define __SCROLLED_VEHICLE_LIST_ITEM_PANEL_H__


#include "../interface/i_scrolled_vehicle_list_item_panel.h"

class CScrolledVehicleListItemPanel : public IScrolledVehicleListItemPanel
{
public:
	CScrolledVehicleListItemPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
	~CScrolledVehicleListItemPanel();

	void setBrandAndModel( std::string brand, std::string model );
	void setState( std::string state );
	void setMileage( unsigned int mileage );
	void setEngineHorsepower( unsigned int horsepower );
	void setEngineCapacity( unsigned int capacity );
	void setPrice( float price );
};

#endif // __SCROLLED_VEHICLE_LIST_ITEM_PANEL_H__