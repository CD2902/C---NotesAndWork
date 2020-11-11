# include <iostream>
# include <iomanip>
using namespace std;

int main(){
	 int price=0;
	 int inp;
	 
	 do{
	     cin>>inp;
	     if(inp==-1){
		 
	     cout<<"end";
	     continue;}
	     price+=inp;
	 }while (inp!=-1);
	 
	 cout<<price<<endl;
	 
	 return 0;
}
