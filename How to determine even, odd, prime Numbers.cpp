/*How to determine even, odd, prime Numbers

By-Aryansh Mahato           twitter.com/AryanshMahato*/


#include<iostream>
using namespace std;

int flag;


int prime(int x);


int main()
{
    int input;

    cout<<"Enter the Number: "; cin>>input;

    if(input==2) cout<<endl<<endl<<"Even and Prime Number"<<endl;

    else if(input%2 == 0) cout<<endl<<endl<<"Even Number"<<endl;

    else if(input%2 == 1)
    {

        if(prime(input)==0)
        {
            cout<<endl<<endl<<"Odd and Prime Number"<<endl;
        }

        else 
        cout<<endl<<endl<<"Odd Number"<<endl;
    }

    else cout<<endl<<endl<<"Wrong Input!!!"<<endl;

    

    return 0;
}


int prime(int x)
{
    int y;

    for(int i=2; i !=--x; ++i)
    {
        y=x % i;

        if(y==0)
        {
            flag=1;
            break;
        }

        else if(y!=0)
        {
            flag=0;
        }
    }

    return flag;
}