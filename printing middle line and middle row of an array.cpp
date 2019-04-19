#include<iostream>
using namespace std;



int main()
{
    int n;

    cout<<"Enter size of the array: ";      cin>>n;
    const int N=n;

    int array[N][N];

    for(int i=0; i<N; ++i)
    {
        for(int j=0; j<N; ++j)
        {
            cout<<"Enter the value of column "<<i+1<<" and column "<<j+1<<" : ";
            cin>>array[i][j];
        }
    }

    for(int i=0; i<N; ++i)
    {
        for(int j=0; j<N; ++j)
        {
            if(i==N/2 || j==N/2)
            cout<<array[i][j];

            else
            cout<<' ';            
        }
        cout<<endl;
    }

    
    
    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}

