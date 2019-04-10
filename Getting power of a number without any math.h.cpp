#include <iostream>
using namespace std;

int main()
{
  int input, pow, i = 1;

  cout << "Enter The number: ";
  cin >> input;
  cout << "Enter raise power: ";
  cin >> pow;
  cout << endl;

  int const in = input;

  while (i < pow)
  {
    input = input * in;
    ++i;
  }

  cout << input << endl;

  system("PAUSE");
  return 0;
}