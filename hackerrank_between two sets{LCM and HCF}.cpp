//https://www.hackerrank.com/challenges/between-two-sets/problem
#include<iostream>
using namespace std;

int smallest(int array[], int size);
int biggest(int array[], int size);


int main()
{
    
    int sizea, sizeb, smallestb, counter, biggesta;
    cin>>sizea>>sizeb;
    int a[sizea], b[sizeb];


    for(int i=0; i<sizea; ++i){
        cin>>a[i];
    }

    

    for(int i=0; i<sizeb; ++i){
        cin>>b[i];
    }


    biggesta=biggest(a, sizea);
    smallestb=smallest(b, sizeb);



    for(int i=biggesta; i<=smallestb; ++i){
        int flag1=0, flag2=0;
        for(int j=0; j<sizea; ++j){
            if(i%a[j]!=0){
                flag1=1;
            }
        }

        if(flag1==0){
            for(int k=0; k<sizeb; ++k){
                if(b[k]%i!=0){
                    flag2=1;
                }
            }
        }

        if(flag1==0 && flag2==0){
            ++counter;
        }
    }

    cout<<endl<<counter<<endl;


    return 0;    

}

int smallest(int array[], int size){
    int small=array[1];

    for(int i=0; i<size; ++i){
        if(array[i]<small){
            small=array[i];
        }
    }

    return small;

}


int biggest(int array[], int size){
    int big=array[0];


    for(int i=0; i<size; ++i){
        if(array[i]>big){
            big=array[i];
        }
    }

    return big;
}
