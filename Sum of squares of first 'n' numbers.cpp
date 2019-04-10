#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, sum, a;

	cout<<"Enter the number of power: ";
	cin>>n;

	a=0;

	while(a<=n)
	{
		sum=pow(2,a)+sum;
		a++;
	}

	cout<<sum;

	return 0;

}
