# include <iostream>
using namespace std;

int main(){
	
	const int count=10;
	int numlist[count];
	int temp, high=0;
	
	cout<<"Enter 10 Random Number\n";
	for(int a=0; a<count; a++)
	cin>>numlist[a];
	
	for(int b=0; b<count; b++)
	{
		if(numlist[b]>high)
			high=numlist[b];
		
		for(int c=1; c<=count; c++)
			if(numlist[c]<numlist[c-1]){
				temp=numlist[c-1];
				numlist[c-1]=numlist[c];
				numlist[c]=temp;
				
			}
	}

	cout<<"\n\n SORTED COMPLETE:";
	for(int d=0; d<count; d++)
	cout<<" "<<numlist[d];

	
	
	return 0;
}

