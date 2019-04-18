#include<iostream>
using namespace std;



int main()
{
    int len;

    cout<<"What will be the length of the array: ";     cin>>len;

    int input[len];
    int rinput[len];


    for(int i=0; i<len; ++i)
    {
        cout<<"Enter "<< i+1 <<" position: ";        cin>>input[i];
    }

    for(int i=len; i>0; --i)
    {
        static int j=0;
        rinput[j]=input[i-1];
        ++j;
    }
    

    cout<<endl<<endl<<endl<<endl;

    for(int i=0; i<len; ++i)
    {
        cout<<rinput[i]<<endl;
    }



    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}
