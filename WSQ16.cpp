#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

float Average(float sum, int lines){
	float average;
	average=sum/(lines/2);
	return average;
}
int main(){
	ifstream file ("93cars.dat.txt");
	string line;
	int line_number=0;
	float cityMPG=0, hwyMPG=0, midprice=0;
	if (file.is_open()){
		while (getline(file, line)){
			line_number++;
			if (line_number%2==1){
				cityMPG += stof(line.substr(52,2));
				hwyMPG += stof(line.substr(55,2));
				midprice += stof(line.substr(42,4));
			}
		}
	}
	cout << "The average gas mileage in city is "<< Average(cityMPG,line_number) << endl;
	cout << "The average gas mileage on highway is "<< Average(hwyMPG,line_number) << endl;
	cout << "The average midrange price of the vehicles in the set is "<< Average(midprice,line_number) << endl;
	return 0;
}