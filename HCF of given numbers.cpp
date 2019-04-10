#include <iostream>
using namespace std;

int num1, num2;
void arrange(int inum1, int inum2);

int main()
{
  int input1, input2, rem = 1;

  cout << "Enter the two numbers: " << endl;
  cin >> input1 >> input2;
  arrange(input1, input2);

  while (rem != 0)
  {
    rem = num1 % num2;
    if (rem == 0)
    {
      cout << num2 << endl;
    }
    else
    {
      num2 = rem;
      num1 = num2;
    }
  }

  system("PAUSE"); //for debuging
  return 0;
}

void arrange(int inum1, int inum2)
{
  if (inum1 > inum2)
  {
    num1 = inum1;
    num2 = inum2;
  }
  if (inum1 < inum2)
  {
    num1 = inum2;
    num2 = inum1;
  }
  else
  {
    cout << "Same number!!" << endl;
    exit(0);
  }
}
