#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(wxID_ANY,onButtonClicked)
wxEND_EVENT_TABLE()

//I left in the code for how to make the array, but the buttons didn't turn out the way I wanted to
//so I manually did them all
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator!", wxPoint(30, 30), wxSize(800, 600))
{
	//text box and button array
	m_txt1 = new wxListBox(this, wxID_ANY, wxPoint(10, 0), wxSize(150, 30));

	wxButton* btnNegative = new wxButton(this, 30, "-x", wxPoint(10, 40), wxSize(30, 30));
	wxButton* btnBin = new wxButton(this, 31, "Bin", wxPoint(50, 40), wxSize(30, 30));
	wxButton* btnHex = new wxButton(this, 32, "Hex", wxPoint(90, 40), wxSize(30, 30));
	wxButton* btnDec = new wxButton(this, 33, "Dec", wxPoint(130, 40), wxSize(30, 30));

	wxButton* btn1 = new wxButton(this, 1,"1", wxPoint(10,80), wxSize(30,30));
	wxButton* btn2 = new wxButton(this, 2, "2", wxPoint(50, 80), wxSize(30, 30));
	wxButton* btn3 = new wxButton(this, 3, "3", wxPoint(90, 80), wxSize(30, 30));
	wxButton* btnMult = new wxButton(this, 34, "X", wxPoint(130, 80), wxSize(30, 30));

	wxButton* btn4 = new wxButton(this, 4, "4", wxPoint(10, 120), wxSize(30, 30));
	wxButton* btn5 = new wxButton(this, 5, "5", wxPoint(50, 120), wxSize(30, 30));
	wxButton* btn6 = new wxButton(this, 6, "6", wxPoint(90, 120), wxSize(30, 30));
	wxButton* btnDiv = new wxButton(this, 35, "/", wxPoint(130, 120), wxSize(30, 30));

	wxButton* btn7 = new wxButton(this, 7, "7", wxPoint(10, 160), wxSize(30, 30));
	wxButton* btn8 = new wxButton(this, 8, "8", wxPoint(50, 160), wxSize(30, 30));
	wxButton* btn9 = new wxButton(this, 9, "9", wxPoint(90, 160), wxSize(30, 30));
	wxButton* btnAdd = new wxButton(this, 36, "+", wxPoint(130, 160), wxSize(30, 30));

	wxButton* btnMod = new wxButton(this, 37, "%", wxPoint(10, 200), wxSize(30, 30));
	wxButton* btn0 = new wxButton(this, 41, "0", wxPoint(50, 200), wxSize(30, 30));
	wxButton* btnClear = new wxButton(this, 38, "C", wxPoint(90, 200), wxSize(30, 30));
	wxButton* btnSub = new wxButton(this, 39, "-", wxPoint(130, 200), wxSize(30, 30));

	wxButton* equalsBtn = new wxButton(this, 40, "=", wxPoint(90, 240), wxSize(70, 30));
	//btn = new wxButton*[buttonCountX, buttonCountY];
	//int buttonPlacementX = 10;
	//int buttonPlacementY = 40;
	////moved my number for my buttons
	//int buttonNum = 1;


	////create the buttons on the calculator
	//for (int x = 0; x < buttonCountY; x++)
	//{
	//	for (int y = 0; y < buttonCountX; y++)
	//	{
	//		std::string z = std::to_string(x);
	//		std::string a = std::to_string(y);
	//		std::string b = z + "-" + a;
	//		btn[x,y] = new wxButton(this, 10000 + (y * buttonCountX + x),b, wxPoint(buttonPlacementX, buttonPlacementY), wxSize(30, 30));
	//		buttonPlacementX += 40;
	//		buttonNum++;
	//	}
	//	buttonPlacementX = 10;//reset this value
	//	buttonPlacementY += 40;
	//}
	//adding the equals buton since this was easier than figuring out something else
	//equalsBtn = new wxButton(this, 1,"=",wxPoint(90,160), wxSize(70,30));

	//testing to see what my array looks like
	//btn[1]->SetLabel("Test");
	//set the buttons to what i want them to look like

	//for (int x = 0; x < buttonCountX; x++)
	//{
	//	btn[0, 0]->SetLabel(std::to_string(buttonNum));
	//	buttonNum++;
	//}

}
cMain::~cMain()
{

}

void cMain::onButtonClicked(wxCommandEvent& evt)
//void cMain::onButtonClicked(wxCommandEvent& evt, wxButton* btnToHandle)
{
	int number = evt.GetId();
	switch (number)
	{
	case 41://0 button
		m_txt1->Append("0");
		break;
	case 1:
		m_txt1->Append("1");
		//m_txt1->SetString();
		break;
	case 2:
		m_txt1->Append("2");
		break;
	case 3:
		m_txt1->Append("3");
		break;
	case 4:
		m_txt1->Append("4");
		break;
	case 5:
		m_txt1->Append("5");
		break;
	case 6:
		m_txt1->Append("6");
		break;
	case 7:
		m_txt1->Append("7");
		break;
	case 8:
		m_txt1->Append("8");
		break;
	case 9:
		m_txt1->Append("9");
		break;
	case 30:
		m_txt1->Append("-");
		break;
	case 31:
		m_txt1->Append("Bin Activated");
		break;
	case 32:
		m_txt1->Append("Hex Activated");
		break;
	case 33:
		m_txt1->Append("Dec Activated");
		break;
	case 34:
		m_txt1->Append("*");
		break;
	case 35:
		m_txt1->Append("/");
		break;
	case 36:
		m_txt1->Append("+");
		break;
	case 37:
		m_txt1->Append("%");
		break;
	case 38:
		m_txt1->Clear();
		break;
	case 39:
		m_txt1->Append("-");
		break;
	case 40:
		m_txt1->Append("=");
		break;
	default:
		break;
	}

	evt.Skip();
}