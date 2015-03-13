#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

float Assing_array_value (int y = 0){ // x es array_size; y es array_position
	cout << "Write the value that is in " << y << " position :" << endl;
	float value;
	cin >> value;
	return value;
}	

float Array_average(float array[], int size){
	int i;
	float sum=0;
	for (i=0; i<size; i++){
		sum = sum + array[i];
	}
	float average;
	average=sum/size;
	return average;
}

float Array_standard_deviation (float array [], int size){
	float deviation;
	int i;
	float Summation_differences =0;
    int avg = Array_average(array, size);
	for (i=0; i < size;i++ ){
		Summation_differences = ((array[i] -avg) *(array[i] - avg))+ Summation_differences;
	}
	deviation = sqrt(Summation_differences/size);
	return deviation;
}

int main (){
	int array_position = 0;
	float array_value;
	int array_size;
	 cout << "Write the size of the array:" << endl;
	 cin >> array_size;
	 float array[array_size];
	 while (array_size > array_position){
	 	array[array_position] = Assing_array_value(array_position);
	 	array_position++;
	 }
	// float array[10];
	// array = {1.0,2.0,3.0,4.0,5.0,1.0,2.0,3.0,4.0,5.0};
	cout << "The average of the values is " << Array_average(array, array_size) << endl;
	cout << "The standard deviation of the values is " << Array_standard_deviation(array, array_size) << endl;
	return 0;
}