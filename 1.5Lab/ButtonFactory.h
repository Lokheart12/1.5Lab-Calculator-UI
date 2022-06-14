#pragma once
#include "cMain.h"

//if you don't pass in the frame it won't work
class ButtonFactory
{
private:
	ButtonFactory();
public:

	ButtonFactory(wxFrame* parent);
	~ButtonFactory();
	wxFrame* parent1;
	
	wxButton* CreateButton1();
	wxButton* CreateButton2();
	wxButton* CreateButton3();
	wxButton* CreateButton4();
	wxButton* CreateButton5();
	wxButton* CreateButton6();
	wxButton* CreateButton7();
	wxButton* CreateButton8();
	wxButton* CreateButton9();
	wxButton* CreateButton0();
	wxButton* CreateButtonNegative();
	wxButton* CreateButtonBin();
	wxButton* CreateButtonHex();
	wxButton* CreateButtonDec();
	wxButton* CreateButtonMult();
	wxButton* CreateButtonDiv();
	wxButton* CreateButtonAdd();
	wxButton* CreateButtonSub();
	wxButton* CreateButtonClear();
	wxButton* CreateButtonMod();
	wxButton* CreateButtonEquals();
};

