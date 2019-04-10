#include "pch.h"          //for Visual Studio
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int input;
  int k = 1;

  cout << "Enter the Number: ";
  cin >> input;

  for (int i = 0; k < input; ++i)
  {

    for (int j = 0; j < i; ++j)
    {
      if (k > input)
        break;
      cout << k++ << '\t';
    }

    cout << endl;
  }

  system("PAUSE"); //for debuging
  return 0;
}
