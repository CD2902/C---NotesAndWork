# include <iostream>
# include <fstream>
using namespace std;

int main()
{
	int size=5;
	int total=0;
	int numbers[size];
     ofstream outfile;
     outfile.open("C:\\Users\\Chris_D\\Documents\\Checking.txt");
     
     outfile<<"Here Is are numbers\n ";
     int a=0;
     while(a<5)
	 {
     cin>>numbers[a];
     outfile<<numbers[a];
     total+=numbers[a];
     a++;
 }
 outfile<<"The total of the numbers are-- "<<total;
 
 outfile.close();
 
 return 0;
 
     
     
}
