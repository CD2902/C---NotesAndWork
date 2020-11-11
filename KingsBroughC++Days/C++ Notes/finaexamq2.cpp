# include <iostream>
using namespace std;

int main(){
	
	int grade[5];
	int total=0;
	int min=grade[0];
	int max=grade[0];
	
	
	for(int a=0;  a<5; a++){
	
	    cin>>grade[a]; 
	    total+=grade[a];
}



	for(int b=1; b<5; b++){
	    if (grade[b]<min)
		min=grade[b];
		cout<<"a"<<min<<"B"<<grade[b];
	    
	    if (grade[b]>max)
	    	max=grade[b];
   }
cout<<min<<endl<<max;
   return 0;
}

