#include <cfixcc.h>
#include "StringCalculator.h"

//-------------------------------------------------------------------
class TestStringCalculator : public cfixcc::TestFixture
{
public:
	void TestStringCalc()
	{
		StringCalculatorNamespace::StringCalculator strCalc;

		// TestEmptyString
		CFIXCC_ASSERT_EQUALS(0, strCalc.add(""));

		// TestOneNumber
		CFIXCC_ASSERT_EQUALS(1, strCalc.add("1"));
		CFIXCC_ASSERT_EQUALS(99, strCalc.add("99"));

		// TestTwoNumbers
		CFIXCC_ASSERT_EQUALS(3, strCalc.add("1,2"));

		// Test Three Numbers
		CFIXCC_ASSERT_EQUALS(6, strCalc.add("1,2,3"));
	}
};

CFIXCC_BEGIN_CLASS(TestStringCalculator)

CFIXCC_METHOD(TestStringCalc)
CFIXCC_END_CLASS()