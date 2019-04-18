#include<iostream>
using namespace std;



int main()
{
    char Ar[80];
    int len=0;

    cout<<"Enter the string: ";     cin.getline(Ar,80);

    for(int i=0; Ar[i]!='\0'; ++i)
    {
        len++;
    }

    cout<<endl<<endl;
    
    for(int i=0; i<=len; ++i)
    {
        cout<<Ar[len-i];
    }


    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}
