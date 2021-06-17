///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/stc/stc.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statbox.h>
#include <wx/fontpicker.h>

///////////////////////////////////////////////////////////////////////////

#define ID_FORM_EDITOR 1000
#define ID_PANEL_EDITOR 1001
#define ID_STYLED_TEXT_CTRL_1 1002
#define ID_MENU_ITEM_NEW 1003
#define ID_MENU_ITEM_OPEN 1004
#define ID_MENU_ITEM_SAVE 1005
#define ID_MENU_ITEM_FONT 1006
#define ID_MENU_ITEM_ABOUT 1007
#define ID_FORM_ABOUT 1008
#define ID_PANEL_ABOUT 1009
#define ID_BITMAP_ABOUT 1010
#define ID_STATIC_TEXT_ABOUT 1011
#define ID_FORM_FONT 1012
#define ID_PANEL_FONT 1013
#define ID_SB_SIZER_FONT 1014

///////////////////////////////////////////////////////////////////////////////
/// Class FormEditor
///////////////////////////////////////////////////////////////////////////////
class FormEditor : public wxFrame
{
	private:

	protected:
		wxPanel* m_panelEditor;
		wxBoxSizer* bSizerEditor;
		wxStyledTextCtrl* m_styled_text_ctrl_1;
		wxMenuBar* m_menubar1;
		wxMenu* m_menuFile;
		wxMenu* m_menuOptions;
		wxMenu* m_menuHelp;

		// Virtual event handlers, overide them in your derived class
		virtual void Close_master( wxCloseEvent& event ) { event.Skip(); }
		virtual void CharHook_styled_text_ctrl_1( wxKeyEvent& event ) { event.Skip(); }
		virtual void MenuSelect_new( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_open( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_save( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_font( wxCommandEvent& event ) { event.Skip(); }
		virtual void MenuSelect_about( wxCommandEvent& event ) { event.Skip(); }


	public:

		FormEditor( wxWindow* parent, wxWindowID id = ID_FORM_EDITOR, const wxString& title = wxT("Mau Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FormEditor();

};

///////////////////////////////////////////////////////////////////////////////
/// Class FormAbout
///////////////////////////////////////////////////////////////////////////////
class FormAbout : public wxFrame
{
	private:

	protected:
		wxPanel* m_panelAbout;
		wxStaticBitmap* m_bitmap_about;
		wxStaticText* m_staticText_about;

	public:

		FormAbout( wxWindow* parent, wxWindowID id = ID_FORM_ABOUT, const wxString& title = wxT("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,125 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );

		~FormAbout();

};

///////////////////////////////////////////////////////////////////////////////
/// Class FormFont
///////////////////////////////////////////////////////////////////////////////
class FormFont : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel_font;
		wxPanel* m_panel4;
		wxStaticText* m_staticText_font;
		wxFontPickerCtrl* m_fontPicker;

		// Virtual event handlers, overide them in your derived class
		virtual void FontChanged( wxFontPickerEvent& event ) { event.Skip(); }


	public:

		FormFont( wxWindow* parent, wxWindowID id = ID_FORM_FONT, const wxString& title = wxT("Font"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxCAPTION|wxCLOSE_BOX|wxTAB_TRAVERSAL );

		~FormFont();

};

