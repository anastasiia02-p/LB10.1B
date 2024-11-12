#include "pch.h"
#include "CppUnitTest.h"
#include "../LB10.1B/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Students students[4];
            students[0].grade_physics = 5;
            students[1].grade_physics = 5;
            students[2].grade_physics = 4;
            students[3].grade_physics = 3;

            int count_5 = 0, count_4 = 0, count_3 = 0;

            // Call the function that counts grades
            count_grades(students, 4, count_5, count_4, count_3);

            // Check if the count of each grade is correct
            Assert::AreEqual(2, count_5); // Expecting 2 students with grade "5"
            Assert::AreEqual(1, count_4); // Expecting 1 student with grade "4"
            Assert::AreEqual(1, count_3); // Expecting 1 student with grade "3"
		}
	};
}
