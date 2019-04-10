#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, x2, y1, y2, sum1, sum2, total;

    cout << "Enter the two co-ordinates" << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    sum1 = x1 - x2;
    sum2 = y1 - y2;

    sum1 = pow(sum1, 2);
    sum2 = pow(sum2, 2);

    total = sum1 + sum2;

    cout << "Distance between both co-ordinates are   " << sqrt(total) << endl;

    system("PAUSE"); //for debuging
    return 0;
}