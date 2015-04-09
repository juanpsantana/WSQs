#include <iostream>
#include <cstdlib>
using namespace std;

long long int factorial (long long int n){
	if (n==0){
		return 1;
	}
	else {
		long long int fact;
		fact = factorial(n-1)*n;
		cout << n << "    " << fact << endl;
		return fact;
	}
}

int main(){
	long long int number, Factorial_result;
	cin >> number;
	Factorial_result = factorial(number);
	cout << Factorial_result;
	return 0;
}