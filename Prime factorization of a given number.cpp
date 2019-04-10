#include <iostream>
using namespace std;

int main()
{
  int input, i;
  float val, rem, check;
  char flag;

  cout << "Enter the number: ";
  cin >> input;
  cout << endl;

  for (;;)
  {

    if (input % 2 == 0)
    {
      val = 2;
      cout << val << endl;
      input = input / 2;
    }
    else if (input % 3 == 0)
    {
      val = 3;
      cout << val << endl;
      input = input / 3;
    }
    else if (input % 5 == 0)
    {
      val = 5;
      cout << val << endl;
      input = input / 5;
    }
    else
    {
      for (i = 2; i < input; ++i)
      {
        if (input / i == 0)
        {
          flag = 'N';
        }

        else
          flag = 'Y';
      }
    }
    if (input == 1)
      break;

    if (flag == 'Y')
    {
      cout << input << endl;
      break;
    }
  }

  system("PAUSE"); //for debuging
  return 0;
}