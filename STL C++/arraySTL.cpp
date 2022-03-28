#include <iostream>
#include <array>

using namespace std;

int main()
{
  int arr[3] = {1, 2, 3};

  // cout << arr[1];

  array<int, 4> a1 = {1, 2, 3, 4};

  for (int i = 0; i < a1.size(); i++)
  {
    /* code */
    cout << a1[i] << endl;
  }
  cout << "Element as 2 pos" << a1.at(2) << endl;
  cout << "Array empty or not:" << a1.empty() << endl;
  cout << "Array first element: " << a1.front() << endl;
  cout << "Array last element: " << a1.back() << endl;
}