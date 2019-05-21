#include<iostream>
using namespace std;

main()
{
    int s, t, a, b, sizeapp, sizeora, counterapp=0, counterora=0;
    int app, ora;
    cin>>s>>t>>a>>b>>sizeapp>>sizeora;

    int apple[sizeapp];
    int orange[sizeora];

    for(int i=0; i<sizeapp; ++i){
        cin>>apple[i];
    }

    for(int i=0; i<sizeora; ++i){
        cin>>orange[i];
    }

    for(int i=0; i<sizeapp; ++i){
        if(apple[i]+a>=s && apple[i]+a<=t){
            ++counterapp;
        }
    }



    for(int i=0; i<sizeora; ++i){
        
        if(orange[i]<0){
            if(b+orange[i]>=s && b+orange[i]<=t){
            ++counterora;
        }
        }
    }

    cout<<counterapp<<endl<<counterora;


    

}
