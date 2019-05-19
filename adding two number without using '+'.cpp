#include<iostream>
using namespace std;


int main()
{
    int a, b;
    cin>>a>>b;

    while(b!=0)
    {
        ++a;
        --b;
    }

    cout<<a<<endl<<endl;

	return 0;
}
