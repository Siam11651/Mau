#pragma once

#include <wx/wx.h>
#include <wx/txtstrm.h>
#include <wx/sstream.h>
#include "FormsController.h"

class Main : public wxApp
{
	FormEditorController* formEditorController;

public:
	virtual bool OnInit();
};

