//https://www.hackerrank.com/challenges/kangaroo/problem?h_r=next-challenge&h_v=zen
#include<iostream>
using namespace std;

main()
{
    
    int x1, x2, v1, v2, flag=0;

    cin>>x1>>v1>>x2>>v2;

    for(int i=0; i<32767; ++i){
        x1+=v1;
        x2+=v2;

        if(x1==x2){
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"NO"<<endl;
    }

    if(flag==1){
        cout<<"YES";
    }

    

}
