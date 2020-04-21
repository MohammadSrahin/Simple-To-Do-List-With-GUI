#pragma once

#include "wx/wx.h"

#include "cMain.h"

class cApp : public wxApp
{
private:
	cMain* mainframe = nullptr;
public:
	cApp();
	~cApp();
	virtual bool OnInit();
};


