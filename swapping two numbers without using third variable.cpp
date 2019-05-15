#include<iostream>
using namespace std;


int main()
{
    int num1, num2;

    cout<<"Both numbers "<<endl;        cin>>num1>>num2;
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"First number is: "<<num1<<endl<<"Second number is: "<<num2;

    cout<<endl<<endl;       //for beautification
    return 0;
}

