#include<iostream>
#include<string>
using namespace std;

class Rectangle{
public:
    float vlen, vwidth, vperimeter, varea;

    void length(float ilength);
    void witdth(float iwidth);
    float perimeter();
    float area();
    void Show();
    int SameArea(Rectangle);
};

void Rectangle::length(float ilength){
    vlen=ilength;
}

void Rectangle::witdth(float iwidth){
    vwidth=iwidth;
}

float Rectangle::perimeter(){
    vperimeter=vlen+vwidth;
    return vlen+vwidth;
}

float Rectangle::area(){
    varea=vlen*vwidth;
    return vlen*vwidth;
}

void Rectangle::Show(){
    cout<<"Perimeter: "<<perimeter()<<endl;
    cout<<"Area: "<<area()<<endl<<endl<<endl;

}

int Rectangle::SameArea(Rectangle Rect){
    if(varea==Rect.varea)
        return 1;
    else
        return 0;
    
}



int main()
{
    Rectangle R1, R2;

    R1.length(15);
    R1.witdth(16.5);
    R1.area();
    R1.perimeter();
    cout<<endl<<"Values of R1"<<endl<<endl;
    R1.Show();

    R2.length(15);
    R2.witdth(16.5);
    R2.area();
    R2.perimeter();
    cout<<endl<<"Values of R2"<<endl<<endl;
    R2.Show();

    if(R2.SameArea(R1)==1)
        cout<<"Bingo!!! Both rectangle have same areas!!!";



    cout<<endl<<endl;
    system("PAUSE");    //for debuging only
    return 0;
}

