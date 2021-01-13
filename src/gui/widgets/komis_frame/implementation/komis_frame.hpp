#ifndef __KOMIS_FRAME_H__
#define __KOMIS_FRAME_H__

#include "../interface/i_komis_frame.h"

class CKomisFrame : public IKomisFrame
{
public:
    CKomisFrame( wxWindow *parent );
    ~CKomisFrame();

    virtual void OnClose( wxCommandEvent& event );
    // temporary placeholder
    virtual void OnAddVehicleButtonClicked( wxCommandEvent& event ); 
};

#endif // __KOMIS_FRAME_H__