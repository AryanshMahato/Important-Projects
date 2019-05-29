#include<iostream>
using namespace std;



int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    string value=" ", value2= " ";

        if(n>=11 && n<=19){
            if (n==11){
            value= "Eleven";
        }
        if (n==12){
            value= "Twelve";
        }
        if (n==13){
            value= "Thirteen";
        }
        if(n==14){
            value="Fourteen";
        }
        if(n==15){
            value="Fifteen";
        }
        if(n==16){
            value="Sixteen";
        }
        if(n==17){
            value="Seventeen";
        }
        if(n==18){
            value="Eigtheen";
        }
        if(n==19){
            value="Nineteen";
        }
        }

        else
        {
            if(n==0){
            value="zero";
        }
        if(n==1 || n%10== 1 ){
		    value="one";
		}
		if (n == 2 || n%10== 2) {
		  value= "two";
		}
		if (n == 3 || n%10== 3) {
		  value= "three";
		}
		if (n == 4 || n%10== 4) {
		  value= "four";
		}
		if (n == 5 || n%10== 5) {
		  value= "five";
		}
		if(n==6|| n%10==6){
		  value= "six";
		}
		if (n == 7|| n%10==7) {
		  value= "seven";
		}
		if(n==8 || n%10==8){
		  value= "eight";
		}
		if (n == 9 || n%10==9) {
		  value= "nine";
		}
        if (n==10){
            value= "ten";
        }        

        if (n==20 || n/10==2){
            value2= "Twenty";
        }
        if (n==30|| n/10==3){
            value2= "Thirty";
        }
        if(n==40 || n/10== 4){
            value2="Fourty";
        }
        if(n==50|| n/10==5){
            value2="Fifty";
        }
        if(n==60|| n/10==6){
            value2="Sixty";
        }
        if(n==70|| n/10==7){
            value2="Seventy";
        }
        if(n==80|| n/10==8){
            value2="Eighty";
        }
        if(n==90 || n/10==9){
            value2="Ninty";
        }}

        cout<<endl<<"You Entered: "<<value2<<" "<<value<<endl<<endl;
    

    cout<<endl<<endl;
    return 0;    
}
