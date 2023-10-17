#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5_2(double)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52d
{
	TEST_CLASS(UnitTest52d)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1, 2, 5);
			Assert::AreEqual(t, 2.5);
		}
	};
}
