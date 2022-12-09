#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_03/Lab_06_03.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0603it
{
	TEST_CLASS(UnitTest0603it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int a[5] = { 3, 6, 8, 2, 5 };
			int sum = 138;
			int n = 5;
			k = SumKv(a, n);
			Assert::AreEqual(k, sum);
		}

		TEST_METHOD(TestMethod2)
		{
			double k = 0;
			double r[5] = { 3, 6, 8, 2, 5 };
			double sum = 138;
			int n = 5;
			k = SumKvT(r, n);
			Assert::AreEqual(k, sum);
		}
	};
}
