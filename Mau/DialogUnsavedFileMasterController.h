#pragma once

#include "MasterHeader.h"

class DialogUnsavedFileMasterController : public DialogUnsavedFileMaster
{
	FormEditorController* parent;
	wxAuiNotebook* parentNoteBook;
	wxArrayString fileNames;
	wxArrayInt fileInd;

	void Click_save_master(wxCommandEvent& event);
	void Click_not_save(wxCommandEvent& event);

public:
	DialogUnsavedFileMasterController(FormEditorController* parent);
};