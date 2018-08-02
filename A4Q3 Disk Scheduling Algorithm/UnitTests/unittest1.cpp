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
			std::vector<int> input = { 1, 2 };
			int result = DS.FCFS();
			Assert::AreEqual(result, 1);
		}

	};
}