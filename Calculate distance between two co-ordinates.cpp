#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, x2, y1, y2, sum1, sum2, total;

    cout << "Enter the two co-ordinates" << endl;
    cout<<"Enter x axis of first Point: ";      cin>>x1;
    cout<<"Enter y axis of first Point: ";      cin>>y1;
    cout<<"Enter x axis of second Point: ";      cin>>x2;
    cout<<"Enter y axis of second Point: ";      cin>>y2;

    sum1 = x1 - x2;
    sum2 = y1 - y2;

    sum1 = pow(sum1, 2);
    sum2 = pow(sum2, 2);

    total = sum1 + sum2;

    cout << endl << endl <<"Distance between both co-ordinates are   " << sqrt(total) << endl;

    
    cout<<endl<<endl<<endl;     //just for looking good
    system("PAUSE");            //for debuging
    return 0;
}
