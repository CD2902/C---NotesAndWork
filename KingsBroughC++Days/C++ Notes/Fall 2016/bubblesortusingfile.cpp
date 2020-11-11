# include <iostream>
# include <fstream>
using namespace std;

int main()
{
	const int size=15;
	int num[size];
	int sort[size];
	int hold;
	
	ifstream infile;
	infile.open("thebubble.txt");
	if(!infile){
		cout<<"srry not the file your looking for";
	}
	else{
	
	for(int a=0; a<size; a++)
	    infile>>num[a];
	infile.close();
	
	for(int b=0; b<size-1; b++)
	{
		for(int c=1; c<size; c++)
		{    
		    if(num[c]<num[c-1])
		    {
		        hold=num[c-1];
		        num[c-1]=num[c];
		        num[c]=hold;
		    }
		         
		}
	} 
	int d=0;
	while(d<size)
	{
	    cout<<num[d]<< " ";
	    d++;
    }
}
    return 0;
	
}
