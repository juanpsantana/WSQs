#include <iostream>
using namespace std;

int main(){
	float x;
	cin >> x;
	if (x <= 0.25)
	  cout << "x is not bigger than 0.25" << endl;
	if (x <= 0.5 && x > 0.25)
	  cout << "x is bigger than 0.25, but smaller than 0.50" << endl;
	if (x <= 0.75 && x > 0.50)
	  cout << "x is bigger than 0.50, but smaller than 0.75" << endl;
	if (x > 0.75)
	  cout << "x is bigger than 0.75" << endl;
	return 0;
}