#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFac.h"
//#include "../Calculator/Processor.h"
#include "../Calculator/AdditionCommand.h"
#include "../Calculator/SubtractCommand.h"
#include "../Calculator/DivideCommand.h"
#include "../Calculator/MultipCommand.h"
#include "../Calculator/App.h"
#include "wx/wx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatotTESTS
{
	TEST_CLASS(CalculatotTESTS)
	{
	public:

		Calculator* frame = new Calculator();

		wxString ans;
		


		TEST_METHOD(FourPlusFourEqualsEight)
		{



		}
	};
}
