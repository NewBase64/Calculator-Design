#pragma once
#include "IBaseCommand.h"
#include "Calculator.h"
#include "Processor.h"

class SubtractCommand : public IBaseCommand {
private:

	Processor* _Process = nullptr;
	int num1 = 0;
	int num2 = 0;


public:
	SubtractCommand(Processor* Process, int _num1, int _num2) {


		_Process = Process;

		num1 = _num1;
		num2 = _num2;


	}

	std::string Execute() {


		return	_Process->GetSubtraction(num1, num2);

	}
};