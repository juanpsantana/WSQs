#include <iostream>
#include <cstdlib>
using namespace std;

float root(float number){
	float old;
	float guess;
	for (guess=(number/2.0); old!=guess;){
		cout << guess << endl;
		old = guess;
		guess= (guess + (number/guess))/2.0;
	}

	return guess;
}

int main(){
	float number;
	cout << "Please, write the number to calculate its square root" << endl;
	cin >> number;
	cout << "The square root of " << number << " is " << root(number) << endl;
	return 0;
}