#include<iostream>
using namespace std;



int main()
{
    int len, biggest_index, samllest_index, biggest=0;
    unsigned int smallest=0;

    cout<<"What will be the length of the array: ";     cin>>len;

    int input[len];


    for(int i=0; i<len; ++i)
    {
        cout<<"Enter "<< i+1 <<" position: ";        cin>>input[i];
    }

    smallest=input[0];

    for(int i=0; i<len; ++i)
    {
        if(input[i]>=biggest)
        {
            biggest=input[i];
            biggest_index=i+1;
        }

        if(input[i]<smallest)
        {
            smallest=input[i];
            samllest_index=i+1;
        }
    }

    cout<<endl<<"Biggest number is: "<<biggest<<" and it's position is "<<biggest_index<<endl<<endl;
    cout<<endl<<"Smallest number is: "<<smallest<<" and it's position is "<<samllest_index<<endl;



    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}
