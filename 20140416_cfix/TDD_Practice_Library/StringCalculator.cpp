#include <string>
#include "StringCalculator.h"

int StringCalculatorNamespace::StringCalculator::add(const std::string& numString)
{
	if (numString.length() == 0)
		return 0;

	size_t delimiterPos = numString.find(",");
	if (delimiterPos == std::string::npos)
		return atoi(numString.c_str());
	size_t delimiterBeginPos = 0;
	int stringTotal = atoi(numString.substr(delimiterBeginPos, delimiterPos).c_str());
	while (delimiterPos != std::string::npos)
	{
		delimiterBeginPos = delimiterPos;
		delimiterPos = numString.find(",", delimiterBeginPos + 1);
		if (delimiterPos != std::string::npos)
		{
			stringTotal += atoi(numString.substr(delimiterBeginPos + 1, delimiterPos).c_str());
		}
		else
		{
			stringTotal += atoi(numString.substr(delimiterBeginPos + 1).c_str());
		}
	};

	return stringTotal;
}