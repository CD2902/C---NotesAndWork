#include <iostream>
using namespace std;
int selectionSort(int [], int);

int main()
{
  const int NUMEL = 10;
  int nums[NUMEL] = {36, 77, 23, 3, 85, 89, 96, 69, 29, 37};
  int i, moves;

  moves = selectionSort(nums, NUMEL);

  cout << "The sorted list, in ascending order, is:\n";
  for (i = 0; i < NUMEL; i++)
    cout << " " << nums[i];

  cout << '\n' << moves << " moves were made to sort this list\n";
system ("pause");
  return 0;
}
int selectionSort(int num[], int numel)
{
  int i, j, min, minidx, temp, moves = 0;

  for ( i = 0; i < (numel - 1); i++)
  {
    min = num[i]; // assume minimum is the first array element
    minidx = i;   // index of minimum element
    for(j = i + 1; j < numel; j++)
    {
      if (num[j] < min) // if you've located a lower value
      {                 // capture it
        min = num[j];
        minidx = j;
      }
    }
    if (min < num[i])     // check whether you have a new minimum
    {                     // and if you do, swap values
      temp = num[i];
      num[i] = min;
      num[minidx] = temp;
      moves++;
              for (int k=0; k < numel; k++)
                    cout << num[k] << "     ";
                cout << endl;
    }
  }

  return moves;
}
