#include "pch.h"
#include "CppUnitTest.h"
#include "../L5.3/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.1;
			double n = 1;
			double c = pow(x, 4 * n + 2) / (2 * n + 2);
			Assert::AreEqual(c, 3, 3);
		}
	};
}
