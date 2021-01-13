///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class IKomisFrame
///////////////////////////////////////////////////////////////////////////////
class IKomisFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar;
		wxMenu* m_menu_file;
		wxMenu* m_menu_help;
		wxNotebook* m_notebook;
		wxPanel* m_notebook_pageGeneral;
		wxStaticText* m_staticText1;
		wxButton* m_button1;
		wxPanel* m_notebook_pageGeneral_panel;
		wxPanel* m_notebook_pageVehicles;
		wxPanel* m_notebook_pageVehicles_panel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDisplayAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddVehicleButtonClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		IKomisFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Komis"), const wxPoint& pos = wxPoint( -1,0 ), const wxSize& size = wxSize( 700,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~IKomisFrame();

};

