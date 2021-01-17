#ifndef __KOMIS_FRAME_H__
#define __KOMIS_FRAME_H__

#include "../interface/i_komis_frame.h"
#include "database/vehicle_management/vehicle_manager.hpp"

class CKomisFrame : public IKomisFrame
{
private:
    CVehicleManager *m_vehicleManager;

public:
    CKomisFrame( wxWindow *parent );
    ~CKomisFrame();

    virtual void OnClose( wxCommandEvent& event );
    // temporary placeholder
    virtual void OnAddVehicleButtonClicked( wxCommandEvent& event ); 
};

#endif // __KOMIS_FRAME_H__