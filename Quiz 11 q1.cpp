#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

float Average(float sum, int lines){
	float average;
	average=sum/(lines);
	return average;
}

float Standard_deviation( vector<int> v, int size, int sum){
	float deviation;
	int i;
	float Summation_differences =0.0;
    float avg = Average(sum, size);
	for (i=0; i < size;i++ ){
		Summation_differences += ((v[i] -avg) *(v[i] - avg));
	}
	deviation = sqrt(Summation_differences/size);
	return deviation;
}

void readNumbersFromFile(string name_file){
	ifstream file (name_file);
	string line;
	vector<int> numbers;
	int line_number=0, sum =0;
	if (file.is_open()){
		while (getline(file, line)){
			int x = atoi(line.c_str());
			numbers.push_back(x);
			sum += numbers [line_number];
			line_number++;
		}
	}
	cout << "The total of the values is "<< sum << endl;
	cout << "The number of values is "<< line_number << endl;
	cout << "The average of the values is "<< Average(sum,line_number) << endl;
	cout << "The standart deviation of the values is " << Standard_deviation(numbers, line_number, sum) <<  endl;
}

int main(){
	readNumbersFromFile("random_numbers.txt");
	return 0;
}