#include <iostream>
#include <string>
using namespace std;

class Father
{
public:
  int height;
  Father(int h)
  {
    cout << "Father Constructor is called" << endl;
    height = h;
  }
};

class Mother
{
public:
  string Skincolor;
  Mother(string iSkincolor)
  {
    cout << "Mother Constructor is called" << endl;
    Skincolor = iSkincolor;
  }
};

class Child : public Father, public Mother
{
public:
  Child(int x, string input) : Father(x), Mother(input)
  {
    cout << "Child Constructor is called" << endl;
  }
  void Display()
  {
    cout << Skincolor << endl
         << height << endl;
  }
};

int main()
{
  Child Aryansh(7, "White");
  Aryansh.Display();

  system("PAUSE"); //for debuging
  return 0;
}
