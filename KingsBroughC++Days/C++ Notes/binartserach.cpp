#include <iostream>
using namespace std;

int binarySearch(int [], int, int);  // function prototype
int main()
{
  const int NUMEL = 10;
  int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
  int item, location;

  cout << "Enter the item you are searching for: ";
  cin >> item;
  location = binarySearch(nums, NUMEL, item);
  if (location > -1)
    cout << "The item was found at index location "
         << location << endl;
  else
    cout << "The item was not found in the list\n";
  system ("pause");
  return 0;
}

// this function returns the location of key in the list
// a -1 is returned if the value is not found
int binarySearch(int list[], int size, int key)
{
  int left, right, midpt;
  left = 0;
  right = size - 1;
  while (left <= right)
  {
    midpt = (int) ((left + right) / 2);
    if (key == list[midpt])
    {
      return midpt;
    }
    else if (key > list[midpt])
      left = midpt + 1;
    else
      right = midpt - 1;
  }

  return -1;
}
