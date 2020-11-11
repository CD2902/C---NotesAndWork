# include <iostream>

using namespace std;

int main(){
int inp,i=0;

while(i<3)
{
	cin>>inp;

if(inp%2==1)
{
	cout<<"Sorry, Plz enter "<<3-i<<" more even number";
	continue;
	}
if (inp%2==0)
{			i++;

	cout<<"Good now"<<3-i<< "more even number";


}

} 
cout<<"thank you.";
return 0;
}
