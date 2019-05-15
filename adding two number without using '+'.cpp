#include<iostream>
using namespace std;

void arrange(int &n1, int &n2);


int main()
{
    int num1, num2, num3;

    cout<<"Enter first number: ";       cin>>num1;
    cout<<"Enter second number: ";       cin>>num2;

    arrange(num1, num2);

    while(num1>0){
        --num1;
        ++num2;
    }

    cout<<endl<<"Answer is: "<<num2<<endl;

    cout<<endl<<endl;       //for beautification
    return 0;
}


void arrange(int &n1, int &n2){
    if(n1>n2){
        n1=n1;
    }
    else if(n2>n1){
        int temp;
        temp=n2;
        n2=n1;
        n1=temp;
    }
    else{
        cout<<"Same Number! But no problem"<<endl;
    }
}
