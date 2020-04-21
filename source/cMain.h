#pragma once

#include "wx/wx.h"


class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
	wxButton* add = nullptr;
	wxButton* remove = nullptr;
	wxButton* clear = nullptr;
	wxButton* exit = nullptr;
	wxTextCtrl* taskInput = nullptr;
	wxListBox* toDoList = nullptr;
	
	void buttonClickAdd(wxCommandEvent& event);
	void buttonClickRemove(wxCommandEvent& event);
	void buttonClickClear(wxCommandEvent& event);
	void buttonClickExit(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};
