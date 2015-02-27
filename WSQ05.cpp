//Temperature
#include <iostream>
using namespace std;

int main()
{
	float F, C;
	cout << "Please, write a temperature in Farenheit degrees:";
	cin >> F;
    C = (5 * (F - 32)) / 9;
	cout << "Your temperature in Celsius is " << C << endl;
	if(C<0){
		cout << "At this temperature, water is solid." << endl;
	}
	if (0<C && C<100){
		cout << "At this temperature, water is liquid." << endl;
	}
	if (C==0){
		cout << "At this temperature, water is just freezing." << endl;
	}
	if (C==100){
		cout << "At this temperature, water is just boiling." << endl;
	}
	if (100<C){
		cout << "At this temperature, water is steam." << endl;
	}
	return 0;
}