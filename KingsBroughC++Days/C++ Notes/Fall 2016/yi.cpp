# include <iostream>
using namespace std;

int main()
{

	int year,  pmonth, stch=0;
    int month [12]={31,28,31,30,31,30,31,31,30,31,30,31};

	
	cout<<"Enter a Month (1-12)"<<endl;
	cin>>pmonth;
	cout<<"Enter a Year:"<<endl;
	cin>>year;
	
	if(year%100==0 && year%400==0)
	{
	     if(year%4==0){
	          for(int i =0; i<12; i++)
			  {
			     if (pmonth==month[i+1])
				    stch=month[i];
		  }
		   cout<<"it is a leap year"<<endl<<stch+1;
		 }
	     
    
   }
    else 
    cout<<"not a leap";

return 0;

}
