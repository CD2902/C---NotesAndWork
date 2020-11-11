# include <iostream>
using namespace std;


int main()
{
int storeinp[5];
int starcal[5];

for(int a=0; a<5; a++){


	if(storeinp[a]<=0)
	cout<<"sorry";

    cin>>storeinp[a];
    starcal[a]=storeinp[a]/100;
}


for(int b=0; b<5; b++)
{
cout<<endl<<b+1<<":";
    for(int c=1; c<=starcal[c]; c++)
        cout<<"*";
}

return 0;
}
