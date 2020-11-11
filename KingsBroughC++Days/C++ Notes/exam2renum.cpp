#include <iostream>
using namespace std;
int main ()
{
	int x;
cout << "please enter a temperature: " << endl;
cin >> x; 
if (x>120)
   cout << "Invalid";
   cout << "Please enter a temperature less than 120 degrees";
if (x>=85)
   cout << "It's really hot today" << endl;
if (x>=65)
   cout << "Perfect weather!" << endl;
if (x>=30)
                  cout << "Getting cold" << endl;
	if (x>=-10) 
	   cout << "It's very cold!" << endl;
	else
     cout << "Invalid";
     cout << "Please enter a temperature more than -10 degrees";
system ("pause");
return 0;
}

