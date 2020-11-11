# include <iostream>
using namespace std;

int parma(int[]);


int main(){
	int jack[10]={};
	for(int a = 0; a<9; a++)
    jack[a]=parma(jack);
    cout<<endl;
	for(int a=0; a<9; a++)
	cout<<""<<jack[a]<<endl;
	return 0;
}


int parma(int joe[])
{
	

	for(int a = 0; a<9; a++){
	cin>>joe[a];
	return joe[a];
}

}
