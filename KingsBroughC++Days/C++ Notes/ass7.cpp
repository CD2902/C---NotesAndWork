# include <iostream>
using namespace std;

int area(int,int );
int perimeter(int, int);


int main()

{
    
    int a, b;
    cout<<"Enter Length"<<endl;
    cin>>a;
    cout<<"Enter Width"<<endl;
    cin>>b;
    cout<<"The Perimeter is "<<perimeter(a, b)<<endl
        <<"The Area is "<<area(a, b)<<endl;;
    system("pause");
    return 0;
}
 
 
 
 
 
 
 
 
 
  int area(int x, int y){
    return x*y;
}



  int perimeter ( int x, int y){
    return 2*(x+y) ;  
}

