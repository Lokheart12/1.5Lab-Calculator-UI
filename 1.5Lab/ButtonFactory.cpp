#include "ButtonFactory.h"
#include "cMain.h"
#include "wx/wx.h"
#include "cApp.h"

ButtonFactory::ButtonFactory()
{

}

ButtonFactory::ButtonFactory(wxFrame* parent)
{
	parent1 = parent;
}
ButtonFactory::~ButtonFactory()
{

}
#pragma region ButtonCreation
wxButton* ButtonFactory::CreateButton1()
{
	wxButton* newButton = new wxButton(parent1, 1, "1", wxPoint(10, 80), wxSize(30, 30));
	return newButton;

}
wxButton* ButtonFactory::CreateButton2()
{
	wxButton* newButton = new wxButton(parent1, 2, "2", wxPoint(50, 80), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton3()
{
	wxButton* newButton = new wxButton(parent1, 3, "3", wxPoint(90, 80), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton4()
{
	wxButton* newButton = new wxButton(parent1, 4, "4", wxPoint(10, 120), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton5()
{
	wxButton* newButton = new wxButton(parent1, 5, "5", wxPoint(50, 120), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton6()
{
	wxButton* newButton = new wxButton(parent1, 6, "6", wxPoint(90, 120), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton7()
{
	wxButton* newButton = new wxButton(parent1, 7, "7", wxPoint(10, 160), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton8()
{
	wxButton* newButton = new wxButton(parent1, 8, "8", wxPoint(50, 160), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton9()
{
	wxButton* newButton = new wxButton(parent1, 9, "9", wxPoint(90, 160), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButton0()
{
	wxButton* newButton = new wxButton(parent1, 41, "0", wxPoint(50, 200), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonNegative()
{
	wxButton* newButton = new wxButton(parent1, 30, "-x", wxPoint(10, 40), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonBin()
{
	wxButton* newButton = new wxButton(parent1, 31, "Bin", wxPoint(50, 40), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonHex()
{
	wxButton* newButton = new wxButton(parent1, 32, "Hex", wxPoint(90, 40), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonDec()
{
	wxButton* newButton = new wxButton(parent1, 33, "Dec", wxPoint(130, 40), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonMult()
{
	wxButton* newButton = new wxButton(parent1, 34, "X", wxPoint(130, 80), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonDiv()
{
	wxButton* newButton = new wxButton(parent1, 35, "/", wxPoint(130, 120), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonAdd()
{
	wxButton* newButton = new wxButton(parent1, 36, "+", wxPoint(130, 160), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonSub()
{
	wxButton* newButton = new wxButton(parent1, 39, "-", wxPoint(130, 200), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonClear()
{
	wxButton* newButton = new wxButton(parent1, 38, "C", wxPoint(90, 200), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonMod()
{
	wxButton* newButton = new wxButton(parent1, 37, "%", wxPoint(10, 200), wxSize(30, 30));
	return newButton;
}
wxButton* ButtonFactory::CreateButtonEquals()
{
	wxButton* newButton = new wxButton(parent1, 40, "=", wxPoint(90, 240), wxSize(70, 30));
	return newButton;
}
#pragma endregion



