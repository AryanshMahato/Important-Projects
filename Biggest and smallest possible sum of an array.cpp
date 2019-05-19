#include<iostream>
using namespace std;


int main()
{
    long long int smallest, biggest, sum=0;
    long long int array[5];

    for(int i=0; i<5; ++i){
        cin>>array[i];
    }

    smallest=array[0];
    biggest=array[0];


    for(int i=0; i<5; ++i){
        sum=sum+array[i];

        if(array[i] > biggest)
            biggest= array[i];

        if(array[i] < smallest)
            smallest= array[i];
    }

    cout<<sum-biggest<<" "<<sum-smallest;

	return 0;
}
