# include <iostream>
# include <iomanip>
using namespace std;

int main(){
     
     const int numa=5;
     int grade[numa]={95,98,100,88,76};
     double total=0;
     int max=grade[0], sub=0;// int min=grad[0]
     for (int k=1;k<5; k++)
     {
         total+=grade[k];
         if(max<grade[k])// min>grade[k]
         {  
             max=grade[k];//min=grade[];
             sub=k;
             }
             }
             cout<<total<<endl;
             cout<<(total-max)/(numa-1)<<endl;//total-max/(max-1)
     cout<<max<<setw(4)<<sub<<endl<<max;
     return 0;
 }
