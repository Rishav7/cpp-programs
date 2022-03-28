#include <iostream>
using namespace std;

int add(int a, int b)
{
  int c;
  c = a + b;
  return c;
}
int main()
{
  int a, b;
  cout << "enter the 1 st no.:";
  cin >> a;
  cout << "enter the 2 st no.:";
  cin >> b;

  cout << "the function returned is:" << add(a, b);
  return 0;
}
