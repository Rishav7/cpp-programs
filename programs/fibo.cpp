#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter : ";
  cin >> n;

  int a1 = 0, a2 = 1, a3;
  if (n == 0 || n == 1)
  {
    cout << 0;
  }
  else
  {
    cout << 0 << " " << 1 << " ";
    for (int i = 2; i < n; i++)
    {
      a3 = a1 + a2;
      a1 = a2;
      a2 = a3;
      cout << a3 << " ";
    }
  }

  return 0;
}
