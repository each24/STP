#include "stdafx.h"
#include "CppUnitTest.h"
#include "Drobi.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			TComplex a(1.0, -1.1);
			Assert::AreEqual(a.getReal(), float(1.0));
			Assert::AreEqual(a.getMnim(), float(-1.1));
		}
		TEST_METHOD(TestMethod2)
		{
			TComplex a(1.0, 1.1);
			Assert::AreEqual(a.getReal(), float(1.0));
			Assert::AreEqual(a.getMnim(), float(1.1));
		}
		TEST_METHOD(TestMethod3)
		{
			TComplex a(1.0, 2.2);
			TComplex b = a.Add(a);
			Assert::AreEqual(a.getReal(), float(1.0));
			Assert::AreEqual(a.getMnim(), float(1.0));
			
		}
		TEST_METHOD(TestMethod4)
		{
			TComplex a(1.0, 3.3);
			TComplex b = a.copy();
			Assert::AreEqual(a.getReal(), float(1.0));
			Assert::AreEqual(a.getMnim(), float(3.3));
		}
		TEST_METHOD(TestMethod5)
		{
			TComplex a(1.0, 3.3);
			TComplex b = a.multiplie(a);
			Assert::AreEqual(a.getReal(), float(1.0));
			Assert::AreEqual(a.getMnim(), float(3.3));
		}
		TEST_METHOD(TestMethod6)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod7)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod8)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod9)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod10)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod11)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod12)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod13)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(TestMethod14)
		{
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(1, 1);
		}


	};
}