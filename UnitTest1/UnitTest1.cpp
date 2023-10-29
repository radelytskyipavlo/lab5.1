#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 2.0;
			double b = 3.0;
			double c = 4.0;
			double expected = (a * a - sin(b) * cos(a) + b * b);
			double actual = h(a, b);

			Assert::AreEqual(expected, actual);
		}
	};
}
