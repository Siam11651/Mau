#include "FormEditorController.h"
#include "PanelFileController.h"
#include "DialogAboutController.h"
#include "DialogFontController.h"
#include "DialogUnsavedFileController.h"
#include "DialogUnsavedFileMasterController.h"
#include "Main.h"

DialogUnsavedFileController::DialogUnsavedFileController(FormEditorController* parent,
	PanelFileController* oldPage, wxAuiNotebookEvent& parentEvent) : DialogUnsavedFile(parent)
{
	this->parent = parent;
	this->parentEvent = &parentEvent;
	this->oldPage = oldPage;
	
	m_staticText_unsaved_file->SetLabel(
		oldPage->GetFileName() + L" is not save.\nSave before closing?");
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