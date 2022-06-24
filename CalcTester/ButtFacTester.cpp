#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/App.h"
#include "../Calculator/Processor.h"
#include "../Calculator/ButtonFac.h"
#include "../Calculator/AdditionCommand.h"
#include "../Calculator/SubtractCommand.h"
#include "../Calculator/DivideCommand.h"
#include "../Calculator/MultipCommand.h"
#include "../Calculator/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtFacTester
{
	TEST_CLASS(CalcTester)
	{
	public:

		TEST_METHOD(Button1)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("8", 8, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 8);
		}
		TEST_METHOD(Button2)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("8", 20, 110, 240, 70, 70);

			Assert::AreNotEqual(button->GetId(), 8);

		}




		TEST_METHOD(Button3)
		{
			Calculator frame;

			wxButton* button = nullptr;
			ButtonFac* fac = new ButtonFac(&frame);
			button = fac->CreateAddButton("17", 15, 110, 240, 70, 70);

			Assert::AreEqual(button->GetId(), 15);

		}
		
		
		
		
		/*
		TEST_METHOD(FourMinus16isNegativeEight)
		{
			wxString ans;
			SubtractCommand* sub = new SubtractCommand(Process, 4, 16);
			ans = sub->Execute();
			Assert::AreEqual(ans, "-12");
		}

		TEST_METHOD(FiveMultFiveisTWENTYFIVE)
		{
			wxString ans;
			MultipleCommand* mult = new MultipleCommand(Process, 5, 5);
			ans = mult->Execute();
			Assert::AreEqual(ans, "25");
		}

		TEST_METHOD(SixDivideSixisOne)
		{
			wxString ans;
			DivideCommand* Div = new DivideCommand(Process, 6, 6);
			ans = Div->Execute();
			Assert::AreEqual(ans, "1");
		}



		TEST_METHOD(FourPLusNegativeFourisZero)
		{
			wxString ans;
			AdditionCommand* add = new AdditionCommand(Process, 4, -4);
			ans = add->Execute();
			Assert::AreEqual(ans, "0");
		}
		TEST_METHOD(SevenPLusNegativeFourisnotZero)
		{
			wxString ans;
			AdditionCommand* add = new AdditionCommand(Process, 7, -4);
			ans = add->Execute();
			Assert::AreNotEqual(ans, "0");
		}
		TEST_METHOD(BINTestOne)
		{
			Processor* Process = Processor::GetProcess();

			int temp = 19;
			wxString ans;

			Process->SetBaseNumber(temp);
			ans = Process->GetBiny();
			Assert::AreEqual(ans, "00000000000000000000000000010011");
		}
		TEST_METHOD(BINTestTWO)
		{
			Processor* Process = Processor::GetProcess();

			int temp = 29;
			wxString ans;

			Process->SetBaseNumber(temp);
			ans = Process->GetBiny();
			Assert::AreEqual(ans, "00000000000000000000000000011101");
		}*/
	};
}