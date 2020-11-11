#include <iostream>
using namespace std;

int  (int [], int);  // function prototype

int main()
{
  const int NUMEL = 10;
  int nums[NUMEL] = {36, 77, 23, 3, 85, 89, 96, 69, 29, 37};
  int i, moves;

  moves = bubbleSort(nums, NUMEL);

  cout << "The sorted list, in ascending order, is:\n";
  for (i = 0; i < NUMEL; i++)
    cout << " " << nums[i];

  cout << '\n' << moves << " moves were made to sort this list\n";
system ("pause");
  return 0;
}

int bubbleSort(int num[], int numel)
{
  int i, j, temp, moves = 0;

  for ( i = 0; i < (numel - 1); i++)
  {
    for(j = 1; j < numel; j++)
    {
      if (num[j] < num[j-1])
      {
        temp = num[j];
        num[j] = num[j-1];
        num[j-1] = temp;
        moves++;
                for (int k=0; k < numel; k++)
                    cout << num[k] << "     ";
                cout << endl;
      }
    }
  }

  return moves;
}
