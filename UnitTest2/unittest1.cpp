#include "stdafx.h"
#include <CppUnitTest.h>  
#include "../libraryApplication/include/LibraryApplication.h"  
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodThreeMultiplication)
		{
			// TODO: テスト コードをここに挿入します
			
			Assert::AreEqual(MyCalc2::ThreeMultiplication(2), 8);
		
		}

	};
}