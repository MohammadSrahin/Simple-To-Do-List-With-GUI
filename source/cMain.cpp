#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(120, buttonClickAdd)
	EVT_BUTTON(110, buttonClickRemove)
	EVT_BUTTON(100, buttonClickClear)
	EVT_BUTTON(90, buttonClickExit)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Simple To-Do-List using wxWidgets", wxPoint(30, 30), wxSize(430, 400))
{
	add = new wxButton(this, 120, "Add a Task", wxPoint(257, 190), wxSize(100, 20));
	taskInput = new wxTextCtrl(this, 80, "", wxPoint(230, 160), wxSize(150, 20));
	remove = new wxButton(this, 110, "Remove", wxPoint(10, 320), wxSize(50, 20));
	clear = new wxButton(this, 100, "Clear", wxPoint(160, 320), wxSize(50, 20));
	exit = new wxButton(this, 90, "Exit", wxPoint(350, 12), wxSize(50, 20));
	toDoList = new wxCheckListBox(this, wxID_ANY, wxPoint(10, 12), wxSize(200, 300));
}

cMain::~cMain()
{

}

void cMain::buttonClickExit(wxCommandEvent& event)
{
	Close(TRUE);
}

void cMain::buttonClickClear(wxCommandEvent& event)
{
	toDoList->Clear();
	event.Skip();
}

void cMain::buttonClickRemove(wxCommandEvent& event)
{
		toDoList->Delete(toDoList->GetSelection());
	event.Skip();
}

void cMain::buttonClickAdd(wxCommandEvent& event)
{
	toDoList->AppendString(taskInput->GetValue());
	taskInput->Clear();
	event.Skip();
}