# include <iostream>
using namespace std;

int main()
{
const int size=10;
int long loto[size]={13579,26791,26792,33445,55555,62483,77777,79422,85647,83121};
int winlotto=55555;
int choice=26791;
int pos;

for(int a=0; a<size; a++)
{
	if(winlotto==loto[a])
		pos=loto[a];
}	
	if(choice=loto[pos])

		cout<<"Congrats winner "<< winlotto;
	else
		cout<<"Sorry you lost # "<< choice;
		
		return 0;


	
}

