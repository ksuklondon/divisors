#include <vector>
#include "CppUnitTest.h"
#include "../DivisorsLib/Divisors.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Microsoft 
{
	namespace VisualStudio 
	{
		namespace CppUnitTestFramework
		{
			template<> inline std::wstring ToString<std::vector<unsigned long long>>(std::vector<unsigned long long> const & vector)
			{
				std::wstring s;
				s = L"{";
				bool first = true;
				for (auto value : vector)
				{
					if (!first)
						s += L",";
					first = false;
					s += ToString(value);
				}
				s += L"}";
				return s;
			}
		}
	}
}

namespace DivisorsUnitTest
{
	TEST_CLASS(DivisorsUnitTest)
	{
	public:
		TEST_METHOD(divisors_0)
		{
			std::vector<unsigned long long> expected{};
			Assert::AreEqual(expected, divisors(0));
		}

		TEST_METHOD(divisors_1)
		{
			std::vector<unsigned long long> expected{1};
			Assert::AreEqual(expected, divisors(1));
		}

		TEST_METHOD(divisors_2)
		{
			std::vector<unsigned long long> expected{1,2};
			Assert::AreEqual(expected, divisors(2));
		}
		TEST_METHOD(divisors_3)
		{
			std::vector<unsigned long long> expected{1,3};
			Assert::AreEqual(expected, divisors(3));
		}
		TEST_METHOD(divisors_4)
		{
			std::vector<unsigned long long> expected{1,2,4};
			Assert::AreEqual(expected, divisors(4));
		}
		TEST_METHOD(divisors_5)
		{
			std::vector<unsigned long long> expected{1,5};
			Assert::AreEqual(expected, divisors(5));
		}
		TEST_METHOD(divisors_6)
		{
			std::vector<unsigned long long> expected{1,2,3,6};
			Assert::AreEqual(expected, divisors(6));
		}
		TEST_METHOD(divisors_9)
		{
			std::vector<unsigned long long> expected{1,3,9};
			Assert::AreEqual(expected, divisors(9));
		}
		TEST_METHOD(divisors_10)
		{
			std::vector<unsigned long long> expected{1,2,5,10};
			Assert::AreEqual(expected, divisors(10));
		}
		TEST_METHOD(divisors_13)
		{
			std::vector<unsigned long long> expected{1,13};
			Assert::AreEqual(expected, divisors(13));
		}
		TEST_METHOD(divisors_81)
		{
			std::vector<unsigned long long> expected{1,3,9,27,81};
			Assert::AreEqual(expected, divisors(81));
		}
		TEST_METHOD(divisors_98)
		{
			std::vector<unsigned long long> expected{1,2,7,14,49,98};
			Assert::AreEqual(expected, divisors(98));
		}
		TEST_METHOD(divisors_100)
		{
			std::vector<unsigned long long> expected{ 1,2,4,5,10,20,25,50,100};
			Assert::AreEqual(expected, divisors(100));
		}
	};
}
