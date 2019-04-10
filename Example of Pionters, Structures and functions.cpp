#include "pch.h"																				//only for Visual Studio
#include<iostream>

using namespace std;


struct student {
	int age;
	int roll;
};


void display(student s);
void show(student *s);


int main()
{
	student aryansh = { 17, 07 };

	display(aryansh);

	show(&aryansh);


	return 0;
}


void display(student s)
{
	cout << s.age << endl;
	cout << s.roll << endl << endl;
}

void show(student *s)
{
	cout << s->age << endl;
	cout << s->roll << endl;
}