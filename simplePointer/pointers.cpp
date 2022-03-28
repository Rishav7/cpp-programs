#include <iostream>
using namespace std;

int main()
{
  int a = 34;
  int *ptrA;

  ptrA = &a;

  cout << "the value of a is : " << a << endl;                            // the value of a is : 34
  cout << "the value of a is via referecing pointer : " << *ptrA << endl; // the value of a is via referecing pointer : 34

  cout << "the address  of a is via  : " << ptrA << endl;                   // the address  of a is via  : 0x7bfe14
  cout << "the address  of a is via DEREFERNCING pointer : " << &a << endl; // the address  of a is via DEREFERNCING pointer : 0x7bfe14
}
