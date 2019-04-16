#include<iostream>
using namespace std;

double power(double num, int power=2);



int main()
{
    double inum;
    int ipower;

    cout<<"Enter the number: ";         cin>>inum;
    cout<<"Enter the raising power: ";           cin>>ipower;

    cout<<power(inum, ipower);



    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}


double power(double num, int power){

    double result=1;

    for(int i=0; i<power; ++i)
    {
        result = result*num;
    }

    return result;
    
}
