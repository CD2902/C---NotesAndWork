# include <iostream>
# include <iomanip>
using namespace std;

int main(){
	 int numarray;
	cout<<"How many numbers are you going to display?"<<endl;
	cin>>numarray;
	 int numinput[numarray];
	int cpos=0;
	int cneg=0;
	int pos[cpos];
	int neg[cneg];
	cout<<"Now enter your numbers."<<endl;
   


	if(numarray>100)
	    cout<<"array to large"<<endl;
	else{
		for(int z=0; z<numarray; z++)
		    cin>> numinput[z];
		for(int z=0; z<numarray; z++){
		    if (numinput[z]>0)
		       cpos++;
		    else if(numinput[z]<0)
		   	    cneg++;

	}

		 for(int x=0; x<numarray; x++){
		 
	        if(numinput[x]<0)
	        neg[x]=numinput[x];
		    
		     else if(numinput[x]>0)
		    pos[x]=numinput[x];
		     
		  
	}
	
		cout<<"#"<<setw(5)<<"Number"<<setw(5)<<"Postive"<<setw(5)<<"Negeative"<<endl;
		cout<<"__"<<setw(5)<<"______"<<setw(5)<<"________"<<setw(5)<<"____________"<<endl;
		 for(int y=0; y<numarray; y++)
		     cout<<y+1<<setw(5)<<numinput[y]<<setw(5)<<pos[y]<<setw(5)<<neg[y]<<endl;
		 
	}
	return 0;
	
}

/* How many numbers are you going to display?
3
Now enter your numbers.
3
3
3
#NumberPostiveNegeative
____________________________
1    3    3   -1
2    3    3    0
3    3    34200014

--------------------------------
Process exited after 2.33 seconds with return value 0
Press any key to continue . . . */

