#include <iostream>
using namespace std;
int main ()
{
int x;
cout << "please enter a number: " << endl;
cin >> x; 
if (x<200)
cout << "You entered a number less than 200";
else if (x>200)
cout << "Your number is more than 200" << endl;
if (x<500)
cout << "Your number is between 200 and 500" << endl;
else
cout << "Your number is very large" << endl;
return 0;
}


