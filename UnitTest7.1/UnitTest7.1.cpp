#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7.1/Lab7.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** Q = new int* [2];
			for (int i = 0; i < 2; i++)
				Q[i] = new int[2];
			Q[0][0] = 2;
			Q[0][1] = 2;
			Q[1][0] = -5;
			Q[1][1] = 11;

			int b = Sum(Q, 2, 2, b);
			Assert::AreEqual(b, 4);


		}
	};
}
