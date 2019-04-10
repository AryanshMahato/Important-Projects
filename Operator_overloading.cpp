#include <iostream>
#include <string>
using namespace std;

class Marks
{
  int imark;
  int emark;

public:
  Marks()		//for filling marks constructor. So objects without parameters can use this class. (like temp in line-31)
  {
    imark = 0;
    emark = 0;
  }

  Marks(int im, int em)
  {
    imark = im;
    emark = em;
  }

  void display()
  {
    cout << imark << endl
         << emark << endl;
  }

  Marks operator+(Marks m)
  {
    Marks temp;
    temp.imark = imark + m.imark;
    temp.emark = emark + m.emark;

    return temp;
  }
};

int main()
{
  Marks m1(40, 50), m2(40, 60);

  Marks m3 = m1 + m2;
  m3.display();

  system("PAUSE"); //for debuging
  return 0;
}
