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


Create a new branch in your Exercise 14 project that modifies the Student Line Up program described in 

Programming Challenge 14 so it reads the student names from the file LineUp.txt. 

The program should read names from the file until there is no more data to read.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int studentsNum = 0;
	int count = 0;
	string name;
	string firstName;
	string lastName;

	// I couldn't find the 'LineUp.txt' so I'm using the 'names.txt' from the module, which I think is the same thing
	
	inputFile.open("names.txt");
	
	if (inputFile)
	{
		while (inputFile >> name)
		{
			count++;
			cout << "Name number " << count << ": " << name << endl;
		}
		inputFile.close();
	}	
	else
	{
		cout << "*ERROR* Unable to open file.";
	}

	return 0;
}