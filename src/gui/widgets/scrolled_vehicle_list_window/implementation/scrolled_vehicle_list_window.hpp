#ifndef __SCROLLED_VEHICLE_LIST_WINDOW_H__
#define __SCROLLED_VEHICLE_LIST_WINDOW_H__

#include "gui/widgets/scrolled_vehicle_list_item_panel/implementation/scrolled_vehicle_list_item_panel.hpp"

#include <wx/scrolwin.h>

// made not to fiddle with every individual vehicle list item
class CScrolledVehicleListWindow : public wxScrolledWindow
{
protected:
#define VEHICLE_ITEM_COUNT 10
    CScrolledVehicleListItemPanel * m_vehiclePanelItems[VEHICLE_ITEM_COUNT];

public:
    CScrolledVehicleListWindow( wxWindow *parent, wxWindowID winid = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxScrolledWindowStyle );

    int getVehicleItemCount();
    CScrolledVehicleListItemPanel *getVehiclePanelByIdx( int idx );
    CScrolledVehicleListItemPanel *operator[]( int idx );
};

#endif // __SCROLLED_VEHICLE_LIST_WINDOW_H__