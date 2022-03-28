#include <iostream>
using namespace std;

int main()
{
  int marks[5];
  for (int i = 1; i < 5; i++)
  {
    cout << "Enter the marks of the " << i << "th students:";
    cin >> marks[i];
  }
  for (int i = 1; i < 5; i++)
  {
    cout << "Entered   marks of the students " << i << "th are :" << marks[i] << endl;
  }
}