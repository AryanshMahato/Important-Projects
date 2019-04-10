#include<iostream>
using namespace std;

int main()
{
	float CtoM(float Input);
	float MtoC(float Input);

	float input, choice;

	cout<<"1. Meter to Centimeter"<<endl<<"2. Centimeter to Meter"<<endl;
	cin>>choice;
	if(choice<=0 || choice>2)
	{
		cout<<"Wrong Choice";
		exit(0);
	}
	cout<<"Enter the value: ";
	cin>>input;


	if(choice==1) cout<<MtoC(input)<<" cm";
	else if(choice==2) cout<<CtoM(input)<<" m";



	return 0;
}


float CtoM(float input)
{
	float Meter;
	Meter=input/100;

	return Meter;
}

float MtoC(float input)
{
	float Centimeter;
	Centimeter=input*100;

	return Centimeter;
}
