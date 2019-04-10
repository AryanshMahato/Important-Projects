#include "pch.h"                                                                           //only for Visual Studio
#include<iostream>

using namespace std;

void display(int *start, int *end);

int main()
{
	int numbers[] = { 1,2,3,4,5,6 };

	display(numbers, numbers + 6);


	return 0;
}

void display(int *start, int *end)
{
	for (int *i = start; i != end; ++i)
	{
		cout << *i << endl;
	}
}