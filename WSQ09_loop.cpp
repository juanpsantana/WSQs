#include <iostream>
#include <cstdlib>
using namespace std;

long long int Factorial_loop (long n){
	if (n==0){
		return 1;
	}
	if (n>0) {
		long long int fact=1;
		for (long i=2;i<=n;i++){
			cout << fact << endl;
			fact=fact*i;
		}
		return fact;
	}
}

int main(){
	long long int factorial, Factorial_result;
	cin >> factorial;
	Factorial_result = Factorial_loop (factorial);
	cout << Factorial_result;
	return 0;
}