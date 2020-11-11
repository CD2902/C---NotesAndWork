# include <iostream>
# include <iomanip>
# include <stdlib.h>
using namespace std;

int main(){
	
	
	int x,y,z,diff1,diff2,num;
	cin>>x>>y>>z;
	
	diff1= abs (x-y);   /// 
	diff2= abs (x-z);
	
	if(diff1>diff2)
	num=1;
	else
	num==0;
	cout<<num<<endl;
	return 0;
	
}
