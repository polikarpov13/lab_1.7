#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1.7/Payment.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment z;

			z.Init(4000, 100, 5, 4000, 0);

			int test = z.іnterestt();

			Assert::AreEqual(4200, test);
		}
	};
}
