#include "MasterHeader.h"

DialogUnsavedFileController::DialogUnsavedFileController(FormEditorController* parent,
	PanelFileController* oldPage, wxAuiNotebookEvent& parentEvent) : DialogUnsavedFile(parent)
{
	this->parent = parent;
	this->parentEvent = &parentEvent;
	this->oldPage = oldPage;
}

void DialogUnsavedFileController::Click_confirm_save(wxCommandEvent& event)
{
	parent->SaveFile(oldPage);
	parentEvent->Skip();
	Close();
}

void DialogUnsavedFileController::Click_no_save(wxCommandEvent& event)
{
	parentEvent->Skip();
	Close();
}