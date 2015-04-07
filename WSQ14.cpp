#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int n){
	if (n==0){
		return 1;
	}
	if (n>0) {
		int fact=1;
		for (int i=2;i<=n;i++){
			fact=fact*i;
		}
		return fact;
	}
}

double floor(double e, int precision){
  e *= pow(10, precision+1);
  e = floor(e);
  e /= pow(10, precision+1);
  return e;
}

float calculate_e(int precision){
	float e = 0.0;
	float prevguess;
	for(float n = 0.0 ;n < 100; n++){
		prevguess = e;
		cout << n << "   " << prevguess << endl;
		e += 1 / float (factorial(n));
		if (floor(prevguess, precision) == floor(e, precision)){
			break;
		}
	}
	return e;
}

int main(){
	int precision;
	cin >> precision;
	cout << endl << calculate_e(precision) << endl;
	return 0;

}
