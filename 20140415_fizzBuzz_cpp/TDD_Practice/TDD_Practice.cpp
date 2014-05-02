#include <iostream>
#include <string>

void AssertEquals(const std::string& expected, const std::string& actual)
{
	if (expected == actual)
	{
		std::cout << "passed: " << expected << " = " << actual << std::endl;
	}
	else
	{
		std::cout << "failed: " << expected << " = " << actual << std::endl;
	}
}

std::string resultDisplay( int x )
{
	if (x < 1 || x > 100)
		return "Input out of Range";

	if ((x % 3 == 0) && (x % 5 == 0))
	{
		return "FizzBuzz";
	}
	else if ((x % 3 == 0))
	{
		return "Fizz";
	}
	else if ((x % 5 == 0))
	{
		return "Buzz";
	}
	else
	{
		char strNum[4];
		return std::string(itoa(x, strNum, 10));
	}

}


void testFizz(int x)
{
	AssertEquals("Fizz", resultDisplay(x));
}

void testBuzz(int x)
{
	AssertEquals("Buzz", resultDisplay(x));
}

void testFizzBuzz(int x)
{
	AssertEquals("FizzBuzz",resultDisplay(x));
}
void testNumber(int x)
{
		char strNum[4];
		AssertEquals(std::string(itoa(x, strNum, 10)), resultDisplay(x));
}
void testInValidInput(int x)
{
	
	AssertEquals("Input out of Range", resultDisplay(x));
}


void test(int x)
{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
		testFizzBuzz(x);
	}
	else if ((x % 3 == 0))
	{
		testFizz(x);
	}
	else if ((x % 5 == 0))
	{
		testBuzz(x);
	}
	else
	{
		testNumber(x);
	}
}


void runAllFizzBuzzTest()
{
	testInValidInput(0);
	testInValidInput(101);
	for (int x = 1; x < 101; x++)
	{
		test(x);
	}
}

int main(int argc, char** argv)
{
	runAllFizzBuzzTest();
	for (int x = 1; x < 101; x++)
	{
		std::cout << resultDisplay(x) << std::endl;
	}

	return 0;
}

