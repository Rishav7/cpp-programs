#include <iostream>
using namespace std;

int main()
{
  int array2d[10][10];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Enter the marks of position {" << i << "," << j << "}: ";
      cin >> array2d[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << " marks of position " << i << "," << j << ": " << array2d[i][j] << endl;
    }
  }
}