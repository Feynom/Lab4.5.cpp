#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4.5/Square.h"
#include "../Lab4.5/Square.cpp"
#include "../Lab4.5/Root.h"
#include "../Lab4.5/Root.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Square E(1, -6, 9);
			E.Result();
			Assert::AreEqual(E.GetX1(), 3.);
			Assert::AreEqual(E.GetX2(), 3.);

		}
	};
}
