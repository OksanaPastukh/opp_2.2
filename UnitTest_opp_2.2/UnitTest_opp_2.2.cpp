#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_2.2/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp22
{
	TEST_CLASS(UnitTestopp22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Complex a(1,1);
			c = a.GetIm();
			Assert::AreEqual(c, 1.0);
		}
	};
}
