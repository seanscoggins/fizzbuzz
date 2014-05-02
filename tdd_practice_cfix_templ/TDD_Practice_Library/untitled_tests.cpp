#include "cfixcc.h"
#include "untitled.h"

class UntitledTest : public cfixcc::TestFixture
{
public:
	void TestAdd2Plus2Equals4()
	{
		untitled::Example e;
		auto result = e.add(2, 2);
		CFIXCC_ASSERT_EQUALS(4, result);
	}

	void TestA()
	{
		CFIX_FAIL("not implemented");
	}
};

CFIXCC_BEGIN_CLASS ( UntitledTest )
	
CFIXCC_METHOD( TestAdd2Plus2Equals4)
CFIXCC_METHOD(TestA)

CFIXCC_END_CLASS ( )

