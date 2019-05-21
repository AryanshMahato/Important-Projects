//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include<iostream>
using namespace std;

int max(int matches[],int size);
int min(int matcher[],int size);



int main()
{
    int size, minimum, maximum;
    cin>>size;
    int matches[size];

    for(int i=0; i<size; ++i){
        cin>>matches[i];
    }

    maximum=max(matches,size);
    minimum=min(matches,size);

    cout<<endl<<maximum<<endl<<minimum;    
    

    cout<<endl<<endl;
    return 0;    
}

int max(int matches[],int size){
    int maxi=matches[0];
    int counter=0;

    for(int i=1; i<size; ++i){
        if(matches[i]>maxi){
            ++counter;
            maxi=matches[i];
        }
    }

    return counter;
    
}

int min(int matches[],int size){
    int mini=matches[0];
    int counter=0;

    for(int i=1; i<size; ++i){
        if(matches[i]<mini){
            ++counter;
            mini=matches[i];
        }
    }

    return counter;
    
}
