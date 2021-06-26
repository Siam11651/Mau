#pragma once

#include "MasterHeader.h"

class FormEditorController : public FormEditor
{
	DialogAboutController* dialogAboutController;
	DialogFontController* dialogFontController;
	DialogUnsavedFile* dialogUnsavedFile;
	DialogUnsavedFileMasterController* dialogUnsavedFileMasterController;
	wxFont editorTextFont;

	void MenuSelect_save(wxCommandEvent& event);
	void MenuSelect_new(wxCommandEvent& event);
	void MenuSelect_open(wxCommandEvent& event);
	void MenuSelect_about(wxCommandEvent& event);
	void MenuSelect_font(wxCommandEvent& event);
	void MenuSelect_exit(wxCommandEvent& event);
	void Close_master(wxCloseEvent& event);
	void AuiNotebookPageClose_file(wxAuiNotebookEvent& event);

public:
	FormEditorController();
	void SaveFile(PanelFileController* activePanelFile);
	void SetEditorTextFont(wxFont font);
	wxFont GetEditorTextFont();
	wxAuiNotebook* GetEditorNoteBookPointer();
};