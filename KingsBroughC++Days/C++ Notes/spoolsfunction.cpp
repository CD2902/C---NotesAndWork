
#include <iostream>
using namespace std;

void numOrder(int&);  //how many spools ordered
double charge(int, double=10);  //calclate charge plus shipping


int main()
{
    int stockSpools=1000;
    int spoolsOrder;
    int special;
    char spcrg;
    
    cout << "How many spools are you ordering?";
    numOrder(spoolsOrder);
    
    //spools are 100 per spool
    //shipping is 10 per spool
    
    cout << "are there special shipping charges?";
    cin >> spcrg;
    
    if (spcrg == 'y')
       {
           cout << "what is special charge" << endl;
           cin >> special;   
           cout << "charge:" << charge(spoolsOrder, special);   
              
       }
     else
           cout << "charge:" << charge(spoolsOrder);   
           
     system ("pause");
     return 0;
     }
    
    
void numOrder(int& x)  //how many spools ordered
{
     cin >>x;
}

double charge(int x, double y)
{
       return x*(100+y);
}
