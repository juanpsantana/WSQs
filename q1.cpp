#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int a, int b){
	int gcd=1, rem;
	if(a==b){
		return a;
	}
	else{
		if (b>a){
			int temp = a;
			a=b;
			b=temp;
		}
		
		while (rem > 1){
			rem = a%b;
			if (rem == 0){
				return b;
			}
			cout << a << ", " << b << ", " << rem << endl;
			a = b;
			b = rem;
			gcd=b;
		}
	}
	return gcd;
}

int main(){
	int a,b, GCD;
	cout << "Please, write the first value" << endl;
	cin >> a;
	cout << "Please, write the second value" << endl;
	cin >> b;
	GCD = gcd(a,b);
	cout << "The greatest common divisor between those numbers is " << GCD << endl;
	return 0;
}