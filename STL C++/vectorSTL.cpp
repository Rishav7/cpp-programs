#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> arr;
  arr.push_back(1);
  arr.push_back(5);
  arr.push_back(15);

  cout << "capacity of :" << arr.capacity() << endl;
  cout << "Size of :" << arr.size() << endl;

  for (int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  vector<int> arr2(5, 1);
  for (int i : arr2)
  {
    cout << i << " ";
  }
}