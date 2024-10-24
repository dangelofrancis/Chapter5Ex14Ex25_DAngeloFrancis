/*
TITLE: Chapter 5 Exercise 14 and Exercise 25 - Student Lineup
FILE NAME: Chapter5Ex14Ex25_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 10/17/2024
REQUIREMENTS: 
Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.

Once all the names have been read, it reports which student would be at the front of the line and

which one would be at the end of the line. You may assume that no two students have the same name.

Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int studentsNum = 0;
	string name;
	string firstName;
	string lastName;

	do
	{
		cout << "Enter how many students there are in the class: ";
		cin >> studentsNum;

		if (studentsNum < 1 || studentsNum > 25)
		{
			cout << endl << "*ERROR* The number of students cannot be less than 1, or greater than 25. Please try again." << endl << endl;
		}
	} while (studentsNum < 1 || studentsNum > 25);


	for (int count = 1; count <= studentsNum; count++)
	{
		cout << "Enter name number " << count << ": ";
		cin >> name;

		if (count == 1)
		{
			firstName = name;
			lastName = name;
		}

		if (name < firstName)
		{
			firstName = name;
		}

		if (name > lastName)
		{
			lastName = name;
		}
	}

	cout << endl << firstName << " is at the front of the line.";
	cout << endl << lastName << " is at the end of the line.";

	return 0;
}