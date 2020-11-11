#include <iostream>
using namespace std;
void message(int);
int main(){
	message(3);
	return 0;
}
void message (int times){
	cout << "message called with " << times << " is times .\n";
	if (times > 0){
		cout << "This is a recursive function.\n";
		message (times - 1);
	}
	cout << "message returning with " << times;
	cout << " in times.\n";
}
