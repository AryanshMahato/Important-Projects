#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char ch[80];
	int countl, counts;
	int i, x;

	cout<<"Enter the Line: ";
	cin.getline(ch,80);

	x=strlen(ch);

	for(i=0; i<=x; i++)
	{
		if(ch[i]==' ') counts++;

		if(ch[i]>='a' && ch[i]<='z') countl++;

	}

	cout<<"\nNumber of Spaces: "<<counts<<endl;
	cout<<"Number of Lower case: "<<countl<<endl;


	return 0;
}
