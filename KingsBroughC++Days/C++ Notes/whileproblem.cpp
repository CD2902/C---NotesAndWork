# include <iostream>
using namespace std;


int main(){
		int x=0,y;
	
	do{

	cin>>y;
	if(y==2)
	continue;
	x+=y;
	
   }while (y<2);
	cout<<x;
	return 0;
}
