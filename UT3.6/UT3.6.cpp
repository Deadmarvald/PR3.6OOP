#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.6/B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT36
{
	TEST_CLASS(UT36)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 1;
			B1 b1(t);

			Assert::AreEqual(t, b1.GetB1());
		}
	};
}