#include<iostream>
using namespace std;

struct Complex_num
{
    int x, xi;
};




int main()
{
    Complex_num a, b;
    Complex_num sum, diff;   
    int prod;

    cout<<"Enter the real part of first complex number: ";      cin>>a.x;
    cout<<"Enter the imaginary part of first complex number: ";      cin>>a.xi;
    cout<<"Enter the real part of second complex number: ";      cin>>b.x;
    cout<<"Enter the imaginary part of second complex number: ";      cin>>b.xi;

    sum.x=(a.x+b.x);
    sum.xi=(a.xi+b.xi);
    diff.x=a.x-b.x;
    diff.xi=a.xi-b.xi;
    prod=sum.x*(-sum.xi);

    cout<<endl<<"Addition of both complex number: "<<sum.x<<" + "<<sum.xi<<"i"<<endl;
    cout<<"Subtraction of both complex number: "<<diff.x<<" - "<<diff.xi<<"i"<<endl;
    cout<<"Product of both complex number: "<<prod;
    

    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}

