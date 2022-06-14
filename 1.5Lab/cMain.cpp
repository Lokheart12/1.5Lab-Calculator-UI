#include "cMain.h"
#include "ButtonFactory.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(wxID_ANY, onButtonClicked)
wxEND_EVENT_TABLE()
//I left in the code for how to make the array, but the buttons didn't turn out the way I wanted to
//so I manually did them all
//wxWindow* window = new wxWindow();
cMain::cMain() : wxFrame(nullptr, 451, "Calculator!", wxPoint(30, 30), wxSize(800, 600))
{
	//creating the frame
	//wxFrame* frame1 = new wxFrame(nullptr, 451, "Calculator!", wxPoint(30, 30), wxSize(800, 600));

	//creating button factory
	ButtonFactory* factory1 = new ButtonFactory(this);

	//text box and button array
	m_txt1 = new wxListBox(this, wxID_ANY, wxPoint(10, 0), wxSize(150, 40));

	wxButton* btnNegative = factory1->CreateButtonNegative();//new wxButton(this, 30, "-x", wxPoint(10, 40), wxSize(30, 30));
	wxButton* btnBin = factory1->CreateButtonBin();//new wxButton(this, 31, "Bin", wxPoint(50, 40), wxSize(30, 30));
	wxButton* btnHex = factory1->CreateButtonHex();// new wxButton(this, 32, "Hex", wxPoint(90, 40), wxSize(30, 30));
	wxButton* btnDec = factory1->CreateButtonDec();//new wxButton(this, 33, "Dec", wxPoint(130, 40), wxSize(30, 30));

	wxButton* btn1 = factory1->CreateButton1();//new wxButton(this, 1,"1", wxPoint(10,80), wxSize(30,30));
	wxButton* btn2 = factory1->CreateButton2();// new wxButton(this, 2, "2", wxPoint(50, 80), wxSize(30, 30));
	wxButton* btn3 = factory1->CreateButton3();// new wxButton(this, 3, "3", wxPoint(90, 80), wxSize(30, 30));
	wxButton* btnMult = factory1->CreateButtonMult(); new wxButton(this, 34, "X", wxPoint(130, 80), wxSize(30, 30));

	wxButton* btn4 = factory1->CreateButton4(); //new wxButton(this, 4, "4", wxPoint(10, 120), wxSize(30, 30));
	wxButton* btn5 = factory1->CreateButton5(); //new wxButton(this, 5, "5", wxPoint(50, 120), wxSize(30, 30));
	wxButton* btn6 = factory1->CreateButton6(); //new wxButton(this, 6, "6", wxPoint(90, 120), wxSize(30, 30));
	wxButton* btnDiv = factory1->CreateButtonDiv(); //= new wxButton(this, 35, "/", wxPoint(130, 120), wxSize(30, 30));

	wxButton* btn7 = factory1->CreateButton7(); //new wxButton(this, 7, "7", wxPoint(10, 160), wxSize(30, 30));
	wxButton* btn8 = factory1->CreateButton8(); //new wxButton(this, 8, "8", wxPoint(50, 160), wxSize(30, 30));
	wxButton* btn9 = factory1->CreateButton9(); //new wxButton(this, 9, "9", wxPoint(90, 160), wxSize(30, 30));
	wxButton* btnAdd =factory1->CreateButtonAdd(); //= new wxButton(this, 36, "+", wxPoint(130, 160), wxSize(30, 30));

	wxButton* btnMod = factory1->CreateButtonMod(); //new wxButton(this, 37, "%", wxPoint(10, 200), wxSize(30, 30));
	wxButton* btn0 = factory1->CreateButton0(); // new wxButton(this, 41, "0", wxPoint(50, 200), wxSize(30, 30));
	wxButton* btnClear = factory1->CreateButtonClear(); // new wxButton(this, 38, "C", wxPoint(90, 200), wxSize(30, 30));
	wxButton* btnSub = factory1->CreateButtonSub(); //new wxButton(this, 39, "-", wxPoint(130, 200), wxSize(30, 30));

	wxButton* equalsBtn = factory1->CreateButtonEquals(); //new wxButton(this, 40, "=", wxPoint(90, 240), wxSize(70, 30));
	
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
		toCalculate.append("0");
		break;
	case 1:
		m_txt1->Append("1");
		toCalculate.append("1");
		break;
	case 2:
		m_txt1->Append("2");
		toCalculate.append("2");
		break;
	case 3:
		m_txt1->Append("3");
		toCalculate.append("3");
		break;
	case 4:
		m_txt1->Append("4");
		toCalculate.append("4");
		break;
	case 5:
		m_txt1->Append("5");
		toCalculate.append("5");
		break;
	case 6:
		m_txt1->Append("6");
		toCalculate.append("6");
		break;
	case 7:
		m_txt1->Append("7");
		toCalculate.append("7");
		break;
	case 8:
		m_txt1->Append("8");
		toCalculate.append("8");
		break;
	case 9:
		m_txt1->Append("9");
		toCalculate.append("9");
		break;
	case 30://negative
		m_txt1->Append("-");
		toCalculate.append("--");//double minus to show that an item is negative in calc
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
		toCalculate.append("*");
		break;
	case 35:
		m_txt1->Append("/");
		toCalculate.append("/");
		break;
	case 36:
		m_txt1->Append("+");
		toCalculate.append("+");
		break;
	case 37:
		m_txt1->Append("%");
		toCalculate.append("%");
		break;
	case 38:
		m_txt1->Clear();
		toCalculate = "";
		break;
	case 39:
		m_txt1->Append("-");
		toCalculate.append("-");
		break;
	case 40:
		//m_txt1->Append("=");
		m_txt1->Clear();
		toCalculate.append("=");
		m_txt1->Append(toCalculate);
		break;
	default:
		break;
	}

	evt.Skip();
}