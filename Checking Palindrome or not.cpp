/*Checking Palindrome or not

By-Aryansh Mahato           twitter.com/AryanshMahato*/



#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char input[80], check[80];
    int flag, count = 0;

    cout << "Enter the number: ";
    cin.getline(input, 80);

    count = strlen(input);

    for (int i = 0; i < count; ++i)
    {
        check[i] = input[i];
    }
    int j = count - 1;

    for (int i = 0; i < count; ++i)
    {
        for (; j >= 0; --j)
        {

            cout << j << endl;
            if (input[i] == check[j])
            {
                flag = 0;
            }

            else if (input[i] != check[j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        cout << "Palindrome";
    if (flag == 1)
        cout << "Not Palindrome";

    return 0;
}
