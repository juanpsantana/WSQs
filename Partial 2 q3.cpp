//Juan Pablo Santana González/A01229382
#include <iostream>
using namespace std;

long fibonacci (long n){
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	long a= 0, b=1, c;
	if (n>1){
		for (long i=1; i<n;i++){
			c=a+b;
			a=b;
			b=c;
		}
	return c; 
	}
}

int main (){
	long n;
	cout << "Position ?" << endl;
	cin >> n;
	cout << fibonacci(n) << endl;		
	return 0;
}
