# include <iostream>
using namespace std;

template <class T>
T min(T num1, T num2 )
{
	if ((num1)<(num2))
		return (num1);
	else if ((num2)<(num1))
		return (num2);

}

template <class T>
T max (T numm1, T numm2)
{
	if ((numm1)>(numm2))
		return (numm1);
	else if ((numm2)>(numm1))
		return (numm2);

}

int main()
{
	int ival=5;
	int ival2=6;
	double dval1=6.8;
	double dval2=7.9;
	char cval1='a';
	char cval2='z';	
	
		
	
	
	
	
	cout<<"1     "<<"2    "<<"MIN      "<<"MAX"
	<<endl<<"------------------------------------------------"<<endl;
	cout<<ival<<"     "<<ival2<<"      "<<min(ival,ival2)<<"      "<<max(ival,ival2)<<endl;
	cout<<dval1<<"   "<<dval2<<"    "<<min(dval1,dval2)<<"    "<<max(dval1,dval2)<<endl;
	cout<<cval1<<"     "<<cval2<<"      "<<min(cval1,cval2)<<"      "<<max(cval1,cval2)<<endl;
	
	return 0;
}


/*1     2    MIN      MAX
------------------------------------------------
5     6      5      6
6.8   7.9    6.8      7.9
a     z      a      z

--------------------------------
Process exited after 0.008845 seconds with return value 0
Press any key to continue . . .*/



