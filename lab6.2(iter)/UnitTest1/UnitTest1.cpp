#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2(iter)/lab6.2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
public:
		TEST_METHOD(TestMethod1) {
			int a[5] = { 1,2,3,4,5 };
			Assert::AreEqual(5, MaxOddElement(a, 5));
		}
	};
}