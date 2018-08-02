#include "stdafx.h"
#include "CppUnitTest.h"
#include <vector>
#include "..\A4Q3 Disk Scheduling Algorithm\DiskScheduler.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(FCFSEasy)
		{
			DiskScheduler DS;
			std::vector<int> input = { 2, 1 };
			int result = DS.FCFS(input);
			Assert::AreEqual(result, 1);
		}		
		TEST_METHOD(FCFSHard)
		{
			DiskScheduler DS;
			std::vector<int> input = { 5, 50, 45, 82, 7, 18, 1, 0, 99, 56, 92, 7 };
			int result = DS.FCFS(input);
			Assert::AreEqual(result, 454);
		}

		TEST_METHOD(SSTFEasy)
		{
			DiskScheduler DS;
			std::vector<int> input = { 2, 1 };
			int result = DS.SSTF(input);
			Assert::AreEqual(result, 1);
		}
		TEST_METHOD(SSTFHard)
		{
			DiskScheduler DS;
			std::vector<int> input = { 5, 50, 45, 82, 7, 18, 1, 0, 99, 56, 92, 7 };
			int result = DS.SSTF(input);
			Assert::AreEqual(result, 108);
		}


	};
}