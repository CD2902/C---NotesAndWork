# include <iostream>
using namespace std;

int main(){
	
	int year,  pmonth, stch=0;	
    int month [12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    cout<<"Enter a Month (1-12)"<<endl;
	cin>>pmonth;
	cout<<"Enter a Year:"<<endl;
	cin>>year;
	
	if (year%4==0 && year%100>0)
	{
		for(int i=0 ;i<=pmonth; i++){
			if(pmonth==i){
				stch=month[i-1];
			}
		}
		cout<<"Its a leap Year\n day :"<<stch+1;
		
	}
	else if (year%100 == 0 && year%400 == 0) 
	{
		for(int i=0 ;i<=pmonth; i++){
			if(pmonth==i)
				stch=month[i-1];
			}
	
		cout<<"Its a leap year\n Day :"<<stch+1;
	}
		else
			cout<<"Its not a leap year";
		
		return 0;
}
