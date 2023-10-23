#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.1a/lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2.0, 3.0);
			Assert::AreEqual(t, 13.0);
		}
	};
}
