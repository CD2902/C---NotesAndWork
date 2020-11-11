	
#include <iostream>
using namespace std;
void fun(int[], int[], double[],double[]);
int main(){

int emplnum[3]={1234,4567,5678};int hours[3]={5,23,40};double payh[3]={12.50,10.00,8.75};double sal[3];
fun(emplnum,hours,payh,sal);
return 0;
}

void fun(int emplnumm[], int hour[], double pay[],double sali[]){
int totalh=0;
for(int x=0; x<=2; x++)
    totalh+=hour[0];

for(int x=0; x<=2; x++)
{
   sali[0]=hour[0]*pay[0];
   cout<<emplnumm[0]<<"  "<<hour[0]<<" "<<pay[0]<<" "<<sali[0]<<endl;
}
cout<<"Total ="<< totalh;
}
