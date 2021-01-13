#ifndef __KOMIS_APP_H__
#define __KOMIS_APP_H__

#include <wx/app.h>

class CKomisApp : public wxApp
{
public:
    virtual bool OnInit() override;
};

#endif // __KOMIS_APP_H__