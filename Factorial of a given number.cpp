#include<iostream>
using namespace std;

int main()
{
	int num,a;


	cout<<"Enter the number: ";
	cin>>num;

	a=1;

	while(num)
	{
		a=num*a;
		num--;
	}


	cout<<a;



	return 0;
}
