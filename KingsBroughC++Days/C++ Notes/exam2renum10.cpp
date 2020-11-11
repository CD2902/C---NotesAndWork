#include <iostream>
using namespace std;

int main ()
{
	int i, j=0, sum;
	for (i=10; i<=13; i++)
	{
		if (i<12)
		       cout << i*2<< endl;
		else
		       j+=2;
		sum+=i;

	}
	cout << "i: " << i << endl << "j: " << j << endl << "sum: " << sum << endl;
	system ("pause");
	return 0;
}

