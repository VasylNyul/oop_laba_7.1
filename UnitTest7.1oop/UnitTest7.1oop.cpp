#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\apple\source\repos\oop_laba_7.1\oop_laba_7.1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71oop
{
	TEST_CLASS(UnitTest71oop)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array <int, 100 > arr = { 3, 18, 27, 52 };
			Assert::AreEqual(Max(arr, 4), 27);
		}
	};
}
