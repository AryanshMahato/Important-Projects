#include<iostream>
using namespace std;



int main()
{
    int size;

    cout<<"What will be the size of the array: ";       cin>>size;

    int array[size][size];
    int rsum=0, lsum=0;

    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size; ++j)
        {
            cout<<"Enter the value of row "<<i+1<<" column "<<j+1<<" : ";
            cin>>array[i][j];
        }
    }

    for(int i=0; i<size; ++i)
    {
        lsum= lsum + array[i][i];
    }

    for(int i=size-1; i>=0; --i)
    {
        rsum= rsum + array[i][i];
    }
    
    cout<<endl<<endl<<"Left Diagonal sum is "<<lsum<<endl;
    cout<<endl<<endl<<"Rigt Diagonal sum is "<<rsum<<endl;

    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}
