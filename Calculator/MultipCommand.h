#pragma once

#include "IBaseCommand.h"
#include "Processor.h"

class MultipleCommand : public IBaseCommand {
private:

	Processor* _Process = nullptr;
	int num1 = 0;
	int num2 = 0;


public:
	MultipleCommand(Processor* Process, int _num1, int _num2) {


		_Process = Process;

		num1 = _num1;
		num2 = _num2;


	}

	std::string Execute() {


		return	_Process->GetMultiply(num1, num2);

	}
};