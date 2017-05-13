#include "stdafx.h"
#include "CppUnitTest.h"
//#include "LibraryApplication.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: テスト コードをここに挿入します
			
			///Assert::AreEqual(MyCalc2::ThreeMultiplication(2), 8);
		
			Assert::AreEqual(8);

		}

	};
}