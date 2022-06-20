#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:
	//int buttonCountX = 4; //number of buttons on the calc
	//int buttonCountY = 5;
	//wxButton **btn; //button array
	//wxFrame frame1;

	//calculator buttons
	wxListBox *m_txt1 = nullptr;
	wxButton* btn1;
	wxButton* btn2;
	wxButton* btn3;
	wxButton* btn4;
	wxButton* btn5;
	wxButton* btn6;
	wxButton* btn7;
	wxButton* btn8;
	wxButton* btn9;
	wxButton* btn0;
	wxButton* btnNegative;
	wxButton* btnBin;
	wxButton* btnHex;
	wxButton* btnDec;
	wxButton* btnMult;
	wxButton* btnDiv;
	wxButton* btnAdd;
	wxButton* btnSub;
	wxButton* btnClear;
	wxButton* btnMod;
	wxButton* equalsBtn;

	std::string toCalculate;
	double prevAnswer;

	void onButtonClicked(wxCommandEvent& evt);
	//void onButtonClicked(wxCommandEvent& evt, wxButton* btnToHandle);
	wxDECLARE_EVENT_TABLE();
};


