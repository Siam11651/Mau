#pragma once

#include "MasterHeader.h"

class Main : public wxApp
{
	FormEditorController* formEditorController;

public:
	virtual bool OnInit();
};

