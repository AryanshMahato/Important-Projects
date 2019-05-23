#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    char input[100];
    int spaceCount=0;
    cin.getline(input,100);

    int l=strlen(input);

    for(int i=0; i<l; ++i){
        if(input[i]==' '){
            ++spaceCount;
        }
    }

    if(spaceCount==0){
        for(int i=l; i>=0; --i){
            cout<<input[i];
        }
    }


    
    int i=0;
    for( ; i<l; ++i){
        if(input[i]==' '|| i==l-1){
            static int j=0;
            if(i==l-1){
                j=i;
                }
            else{
                j=i-1;
            }
            for( ; input[j]!=' ' && j!=-1; --j){
                    cout<<input[j];
            }
            cout<<' ';
            ++i;
        }
    }

    
    

    cout<<endl<<endl;
    return 0;    
}
