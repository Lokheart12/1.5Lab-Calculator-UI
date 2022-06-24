#pragma warning(disable : 4996)
#include "pch.h"
#include "CppUnitTest.h"
#include"../1.5Lab/ButtonFactory.h"
#include"../1.5Lab/ButtonFactory.cpp"
#include"../1.5Lab/Processor.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest
{
	TEST_CLASS(CalculatorUnitTest)
	{
		Processor* processor = Processor::getInstance();
	public:
		//calculator processor tests
		//1
		TEST_METHOD(AddTwoPlusTwoEqualsFour)
		{
			int answer = Add::modCommand(2, 2);
			Assert::AreEqual(answer, 4);
		}
		//2
		TEST_METHOD(Subtract)
		{ 
			int answer = Subtract::modCommand(2, 2);
			Assert::AreEqual(answer, 0);
		}
		//3
		TEST_METHOD(Multiply)
		{
			int answer = Multiply::modCommand(2, 2);
			Assert::AreEqual(answer, 4);
		}
		//4
		TEST_METHOD(Divide)
		{
			int answer = Divide::modCommand(2, 2);
			Assert::AreEqual(answer, 1);
		}
		//5
		TEST_METHOD(Mod)
		{
			int answer = Mod::modCommand(2, 2);
			Assert::AreEqual(answer, 0);
		}
		//6
		TEST_METHOD(Bianary)
		{
			int answer = 2;
			processor->setBaseNumber(answer);
			std::string convertedNum = processor->getBianary();
			std::string expected = "00000000000000000000000000000010";
			Assert::AreEqual(convertedNum, expected);
		}
		//7
		TEST_METHOD(Bianary2)
		{
			int answer = 78;
			processor->setBaseNumber(answer);
			std::string convertedNum = processor->getBianary();
			std::string expected = "00000000000000000000000001001110";
			Assert::AreEqual(convertedNum, expected);
		}
		//8
		TEST_METHOD(Hex)
		{
			int answer = 41;
			processor->setBaseNumber(answer);
			std::string convertedNum = processor->getHexadecimal();
			std::string expected = "0x29";
			Assert::AreEqual(convertedNum, expected);
		}
		//9
		TEST_METHOD(Hex2)
		{
			int answer = 392;
			processor->setBaseNumber(answer);
			std::string convertedNum = processor->getHexadecimal();
			std::string expected = "0x188";
			Assert::AreEqual(convertedNum, expected);
		}
		//10
		TEST_METHOD(Decimal)
		{
			int answer = 15;
			processor->setBaseNumber(answer);
			std::string convertedNum = processor->getDecimal();
			std::string expected = "15";
			Assert::AreEqual(convertedNum, expected);
		}
		
		//Button Factory Tests
		wxFrame* frame1 = new wxFrame(nullptr, 451, "Calculator!", wxPoint(30, 30), wxSize(800, 600));
		ButtonFactory* factory1 = new ButtonFactory(frame1);

		//1
		TEST_METHOD(Button1Label)
		{
			wxButton* btn1 = factory1->CreateButton1();
			Assert::AreEqual(btn1->GetLabelText(), "1");
		}
		//2
		TEST_METHOD(Button2Label)
		{
			wxButton* btn1 = factory1->CreateButton2();
			Assert::AreEqual(btn1->GetLabelText(), "2");
		}
		//3
		TEST_METHOD(Button3Label)
		{
			wxButton* btn1 = factory1->CreateButton3();
			Assert::AreEqual(btn1->GetLabelText(), "3");
		}
		//4
		TEST_METHOD(Button4Label)
		{
			wxButton* btn1 = factory1->CreateButton4();
			Assert::AreEqual(btn1->GetLabelText(), "4");
		}
		//5
		TEST_METHOD(ButtonEquals)
		{
			wxButton* btn1 = factory1->CreateButtonEquals();
			Assert::AreEqual(btn1->GetLabelText(), "=");
		}
		//6
		TEST_METHOD(Button1ID)
		{
			wxButton* btn1 = factory1->CreateButton1();
			Assert::AreEqual(btn1->GetId(), 1);
		}
		//7
		TEST_METHOD(Button2ID)
		{
			wxButton* btn1 = factory1->CreateButton2();
			Assert::AreEqual(btn1->GetId(), 2);
		}
		//8
		TEST_METHOD(Button3ID)
		{
			wxButton* btn1 = factory1->CreateButton3();
			Assert::AreEqual(btn1->GetId(), 3);
		}
		//9
		TEST_METHOD(Button4ID)
		{
			wxButton* btn1 = factory1->CreateButton4();
			Assert::AreEqual(btn1->GetId(), 4);
		}
		//10
		TEST_METHOD(ButtonClearID)
		{
			wxButton* btnClear = factory1->CreateButtonClear();
			Assert::AreEqual(btnClear->GetId(), 38);
		}

	};
}
