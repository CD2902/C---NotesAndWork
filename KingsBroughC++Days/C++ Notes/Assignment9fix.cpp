# include <iostream>
# include <iomanip>
using namespace std;

int main(){
    int numarray;
	cout<<"How many numbers are you going to display?"<<endl;
	cin>>numarray;
	int numinput[numarray];
	int cpos=0,cneg=0, pos[numarray],neg[numarray];
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
		 
	        if(numinput[x]<0){
	             neg[x]=numinput[x];
	            pos[x]=0;}
            else if(numinput[x]>0){
		    pos[x]=numinput[x];
		    neg[x]=0;}
		    
		     
		  
	}
	
		cout<<"#"<<setw(10)<<"InputNum"<<setw(6)<<"Pos#"<<setw(5)<<"Neg#"<<endl;
		cout<<"__"<<setw(5)<<"______"<<setw(5)<<"________"<<setw(5)<<"____________"<<endl<<endl;
		 for(int y=0; y<numarray; y++)
		     cout<<y+1<<")"<<setw(5)<<numinput[y]<<setw(8)<<pos[y]<<setw(8)<<neg[y]<<endl;
		 
	}
        cout<<"You have "<<cpos<<" Postive"<<endl<<"You have "<<cneg<<" Negative";
	return 0;
	
}

/*
How many numbers are you going to display?
5
Now enter your numbers.
-3
4
-5
5
1
#  InputNum  Pos# Neg#
____________________________

1)   -3       0      -3
2)    4       4       0
3)   -5       0      -5
4)    5       5       0
5)    1       1       0
You have 3 Postive
You have 2 Negative
--------------------------------
Process exited after 8.577 seconds with return value 0
Press any key to continue . . .*/ 


