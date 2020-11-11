# include <iostream>
# include <iomanip>
using namespace std;

int main(){
	
	int distance;
	double weight, ratef;
	
	cout<<"Enter weight in Kilogram"<<endl;
	cin>>weight;
	cout<<"Enter distance in miles"<<endl;
	cin>>distance;
	
 
	if (weight<=0 || weight>20&& distance<10||distance>3000){
                      
	   cout<<"Sorry we can't accept that"<<endl;}
	   else if (weight<=2){
	   ratef= distance /500*1.10;}
	   else if (weight>2 && weight<6){
	   ratef= distance/500*2.20;}
	   else if (weight>6 && weight <10){
	   ratef= distance/500* 3.70;}
	   else if (weight>10 && weight <=20){
	   ratef= distance/500*4.80;}
	   
	  if(weight>=1 || weight >10)
       cout<< "your charge is $ "<<fixed<<setprecision(2)<< ratef<<endl<<endl<<" Have a nice day."<<endl;
       
       system("pause");
       return 0;
}
