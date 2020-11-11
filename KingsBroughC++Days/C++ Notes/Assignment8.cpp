# include <iostream>
# include <iomanip>
using namespace std;
double findlow(double,double,double,double);
double findaverage(double,double,double,double);
char test(double);

int main(){
int howms;
double s1,s2,s3,s4;
cout<<"Enter Grades"<<endl;
cin>>s1>>s2>>s3>>s4;
cout<<fixed<<setprecision(0);
cout<<"Average: "<<findaverage(s1,s2,s3,s4)<<endl;
cout<<"Test"<<setw(5)<<": "<<test(findaverage(s1,s2,s3,s4))<<endl;
cout<<"Drop Grade :"<<findlow(s1,s2,s3,s4);
return 0;



}






double findlow(double a, double b,double c, double d){

double droplow=a;
   if(b<droplow)
droplow=b;
   if(c<droplow)
droplow=c;
   if (d<droplow)
droplow=d;

return droplow;

}

double findaverage(double a, double b, double c, double d){
double low;
double average;
double zlow=findlow(a,b,c,d);
average=((a+b+c+d)-zlow)/3;

return average;
}


char test(double average){

char letter;

if(average>=90)
letter = 'A';
else if(average>=80)
letter = 'B' ;     
else if(average>=70)
letter ='C';
else if(average>=60)
letter ='D';
else if(average<=59)
letter ='F';
return letter;

}

/*Enter Grades
80
90
100
10
Average: 90
Test   : A
Drop Grade :10
--------------------------------
Process exited after 10.74 seconds with return value 0
Press any key to continue . . .*/

