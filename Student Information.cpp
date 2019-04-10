// In this code. user will enter details of student and pogram will give output of the topper, Specific student marks wrt roll number on user choice.



#include "pch.h"					//for Visual Studio only
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int roll=0;
	string name;
	float marks=0;
	char grade='A';

public:
	void input() {
		cout << "Enter roll: ";				cin >> roll;
		cout << "Enter name: ";				cin >> name;
		cout << "Enter marks: ";			cin >> marks;

		if (marks >= 80)		grade = 'A';
		else if (marks >= 60)	grade = 'B';
		else if (marks >= 40)	grade = 'C';
		else if (marks < 40)	grade = 'F';
	}

	float getmarks() {
		return marks;
	}

	
	void display() {
		cout << name<<endl;
		cout << "Marks: " << marks << endl;
		cout << "Grades: " << grade << endl;
	}

};



int main() 
{
	Student aryansh[3];
	int choice, roll, topper;
	float  highest = 0;

	for (int i = 0; i < 3; ++i)
	{
		aryansh[i].input();
	}
	
	cout << "1. Student detail" << endl;
	cout << "2. Topper" << endl;
	cout << "3. Exit" << endl;
	cin >> choice;

	for (int i = 0; i < 3; ++i)
	{
		if (aryansh[i].getmarks() > highest) {
			topper = i;
			highest = aryansh[i].getmarks();
		}
	}

	switch (choice)
	{
	case 1:cout << "Enter the roll number: ";			cin >> roll;
		aryansh[roll - 1].display();
		break;

	case 2:aryansh[topper].display();
		break;

	case 3:break;


	default:"Wrong Input!!";
		break;
	}


	return 0;
}
