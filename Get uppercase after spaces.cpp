#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char input[80], change[80];
	int x;

	cout<<"Enter the line: ";
	cin.getline(input,80);

	x=strlen(input);
	for(int i=0; i<=x; ++i) change[i]=input[i];

	change[0]=toupper(input[0]);

	for(int i=0; i<=x; ++i)
	{
		if(input[i]==' ')
			{change[i+1]=toupper(input[i+1]);}


	}



	cout<<change;

	return 0;
}
