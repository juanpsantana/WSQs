#include <iostream>
using namespace std;

int main (){
	int variable;
	cin >> variable;
	switch (variable){
		case 1:
			cout << "Variable equals 1" << endl;
			break;
		case 2:
			cout << "Variable equals 2" << endl;
			break;
		default:
			cout << "Variable is different than 1 or 2" << endl;
	}
	return 0;
}