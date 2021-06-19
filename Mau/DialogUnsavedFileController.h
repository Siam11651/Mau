#pragma once

class DialogUnsavedFileController : public DialogUnsavedFile
{
	FormEditorController* parent;
	PanelFileController* oldPage;
	wxAuiNotebookEvent* parentEvent;

	void Click_confirm_save(wxCommandEvent& event);
	void Click_no_save(wxCommandEvent& event);
public:
	DialogUnsavedFileController(FormEditorController* parent, PanelFileController* oldPage,
		wxAuiNotebookEvent& parentEvent);
};