#include <iostream>
using namespace std;

int main()
{
  char flag;
  int equation, f, s, t;

  for (int i = 0; i < 500; ++i)
  {
    if (i < 10)
    {
      equation = i * i * i;

      if (equation == i)
        cout << i << endl;
    }

    if (i >= 10 && i < 99)
    {
      f = i / 10;
      s = i - f * 10;
      equation = (f * f * f) + (s * s * s);

      if (equation == i)
        cout << i << endl;
    }

    if (i >= 100 && i <= 500)
    {
      f = i / 100;
      s = i / 10 - f * 10;
      t = i - f * 100 - s * 10;

      equation = (f * f * f) + (s * s * s) + (t * t * t);

      if (equation == i)
        cout << i << endl;
    }
  }

  system("PAUSE"); //for debuging
  return 0;
}
