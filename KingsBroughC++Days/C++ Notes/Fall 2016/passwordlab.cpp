# include <iostream>
# include <cstring>
using namespace std;

bool length (char[], int);
bool upper  (char[], int);
bool lower  (char[], int);
bool number (char[], int);
void everything (bool,bool,bool,bool);

int main()
{
    int size;
    const int len=25;
    char password[len];
    cout<<"Enter Password"<<endl;
    cin.getline(password,len);
    size=strlen(password);
    everything(length(password,size),upper(password,size),lower(password,size),number(password,size));
    return 0;
}

bool length (char pass[],int plength)
{
    if(plength>=6)
        return true;
    return false;
}

bool upper(char pass[],int plength)
{
 for(int a=0; a<plength; a++)
     if(isupper(pass[a]))
         return true;
 return false;
}

bool lower(char pass[],int plength)
{
     for(int a=0; a<plength; a++)
         if(islower(pass[a]))
             return true;
return false;
}

bool number(char pass[],int plength)
{
    for(int a=0; a<plength; a++)
        if(isdigit(pass[a]))
            return true;
return false;
}


void everything(bool psize, bool pupper, bool plower, bool pnumber)
{
    if(psize && pupper && plower && pnumber)
        cout<<"Password Activated";
        
    else
        cout<<"Password did not meet a criteria";
        
}
