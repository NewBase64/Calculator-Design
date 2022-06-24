#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFac.h"
#include "../Calculator/Processor.h"
#include "../Calculator/AdditionCommand.h"
#include "../Calculator/SubtractCommand.h"
#include "../Calculator/DivideCommand.h"
#include "../Calculator/MultipCommand.h"
#include "../Calculator/App.h"
#include "wx/wx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcTester
{
	TEST_CLASS(CalcTester)
	{
	public:
		
		TEST_METHOD(FourPLusFourisEight)
		{
			Processor* Process = Processor::GetProcess();

			wxString ans;
			AdditionCommand* add = new AdditionCommand(Process,4,4);
			ans = add->Execute();
			Assert::AreEqual(ans, "8");
		}
		TEST_METHOD(HexTestOne)
		{
			Processor* Process = Processor::GetProcess();

			int temp = 7;
			wxString ans;
			
			Process->SetBaseNumber(temp);
			ans =Process->GetHex();
			Assert::AreEqual(ans, "0x7");
		}
		TEST_METHOD(HexTestTwo)
		{
			Processor* Process = Processor::GetProcess();

			int temp = 18;
			wxString ans;

			Process->SetBaseNumber(temp);
			ans = Process->GetHex();
			Assert::AreEqual(ans, "0x12");
		}
		TEST_METHOD(FourMinus16isNegativeEight)
		{
			Processor* Process = Processor::GetProcess();

			wxString ans;
			SubtractCommand* sub = new SubtractCommand(Process, 4, 16);
			ans = sub->Execute();
			Assert::AreEqual(ans, "-12");
		}
		
		TEST_METHOD(FiveMultFiveisTWENTYFIVE)
		{
			Processor* Process = Processor::GetProcess();

			wxString ans;
			MultipleCommand* mult = new MultipleCommand(Process, 5, 5);
			ans = mult->Execute();
			Assert::AreEqual(ans, "25");
		}
		
		TEST_METHOD(SixDivideSixisOne)
		{
			Processor* Process = Processor::GetProcess();

			wxString ans;
			DivideCommand* Div = new DivideCommand(Process, 6, 6);
			ans = Div->Execute();
			Assert::AreEqual(ans, "1");
		}
			
			
			
		TEST_METHOD(FourPLusNegativeFourisZero)
		{
			Processor* Process = Processor::GetProcess();

			wxString ans;
			AdditionCommand* add = new AdditionCommand(Process, 4, -4);
			ans = add->Execute();
			Assert::AreEqual(ans, "0");
		}
		TEST_METHOD(SevenPLusNegativeFourisnotZero)
		{
			Processor* Process = Processor::GetProcess();

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
		}


	};
}
