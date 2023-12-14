#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest93
{
	TEST_CLASS(UnitTest93)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Route array[] = { {{"A"}, {"B"}, 1} };
			int size = 1;
				Sort(array, size);
				Assert::AreEqual(size, 1);
		}
	};
}
