#include<iostream>
using namespace std;

int main()
{

	int result[4][3];
	int i,j,total[4],a;
	char grades[4];

	for(i=0; i<4; ++i)
	{
		total[i]=0;
		for(j=0; j<3; ++j)
		{
		cout<<"Enter Marks of student "<<i+1<<"\nTest "<<j+1<<endl;
		cin>>result[i][j];

		total[i]=total[i]+result[i][j];

		if(total[i]>250) grades[i]='A';
				if(total[i]>180 && total[i]<250) grades[i]='B';
				if(total[i]>120 && total[i]<180) grades[i]='C';
				if(total[i]>0 && total[i]<120) grades[i]='D';
		}


	}

		cout<<"Which student grades you want?"; cin>>a;
	a=a-1;

	cout<<"Grades: "<<grades[a];


	return 0;
}
