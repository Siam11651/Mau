#pragma once

#include "MasterHeader.h"

class DialogFontController : public DialogFont
{
	FormEditorController* formEditorController;

	void FontChanged(wxFontPickerEvent& event);

public:
	DialogFontController(FormEditorController* formEditorController);
};