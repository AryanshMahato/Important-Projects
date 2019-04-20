#include<iostream>
#include<string>
using namespace std;

class Distance{
private:
    int feet=0;
    float inch=0;

public:
    void set(int ifeet, float iinch){
        feet=ifeet;
        inch=iinch;
    }

    void display(){
        cout<<feet<<" Feet "<<inch<<" inches"<<endl<<endl;      
    }

    Distance sum(Distance dummy){
        Distance temp;
        int count=0;
        if(inch+dummy.inch>=12){
            ++count;
            ++feet;
        }

        temp.feet= feet+dummy.feet;
        temp.inch= inch+dummy.inch-(count*12);

        return temp;

    }
};


int main()
{
    Distance d1, d2, d3;

    d1.set(4, 6);
    cout<<"Value of d1: ";
    d1.display();

    d2.set(3, 6);
    cout<<"Value of d2: ";
    d2.display();

    d3=d1.sum(d2);
    cout<<endl;
    cout<<"Value of d3: ";
    d3.display();
    


    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}

