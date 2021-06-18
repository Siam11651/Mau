#pragma once

#include <wx/filedlg.h>
#include <wx/choicdlg.h>
#include <wx/wfstream.h>
#include <wx/textfile.h>
#include <wx/txtstrm.h>
#include <wx/sstream.h>
#include "Forms.h"

class FormEditorController;
class FormAboutController;
class FormFontController;

class DialogAboutController : public DialogAbout
{
public:
	DialogAboutController(wxWindow* parent);
};

class DialogFontController : public DialogFont
{
	FormEditorController* formEditorController;

	void FontChanged(wxFontPickerEvent& event);

public:
	DialogFontController(FormEditorController* formEditorController);
};

class FormEditorController : public FormEditor
{
	wxString filePath;
	DialogAboutController* dialogAboutController;
	DialogFontController* dialogFontController;
	DialogUnsavedFile* dialogUnsavedFile;

	void MenuSelect_save(wxCommandEvent& event);
	void MenuSelect_new(wxCommandEvent& event);
	void MenuSelect_open(wxCommandEvent& event);
	void MenuSelect_about(wxCommandEvent& event);
	void MenuSelect_font(wxCommandEvent& event);
	void CharHook_styled_text_ctrl_1(wxKeyEvent& event);
	void Close_master(wxCloseEvent& event);

public:
	FormEditorController();
	wxFont GetStyledTextCtrlFont();
	void SetStyledTextCtrlFont(wxFont font);
	void SaveFile();
};

class DialogUnsavedFileController : public DialogUnsavedFile
{
	FormEditorController* parent;

	void Click_confirm_save(wxCommandEvent& event);
	void Click_no_save(wxCommandEvent& event);
public:
	DialogUnsavedFileController(FormEditorController* parent);
};

