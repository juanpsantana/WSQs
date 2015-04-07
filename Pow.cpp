#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int power_up (int number, int power){
	return pow((number), power);
}

int main (){
	int number, power;
	cin >> number;
	cin >> power;
	cout << power_up(number, power);
	return 0;
}