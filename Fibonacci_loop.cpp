#include <iostream>
#include <cstdlib>
using namespace std;

int Fibonacci_loop (int position){
	if (position <3){
		return 1;
	}
	if (position >=3){
		int c;
		int a = 1, b =1;
		for(int i=2; i<position;i++){
			c=a+b;
			a=b;
			b=c;
		}
		return c;
	}
}

int main(){
	int position;
	cin>> position; 
	cout << Fibonacci_loop(position);
	return 0;
}