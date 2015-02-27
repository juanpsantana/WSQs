#include <iostream>
#include <cstdlib>
using namespace std;

int functionSum (int x, int y){
	int answer;
	answer = x+y;
	return answer;
}

int functionDifference (int x, int y){
	int answer;
	answer = x-y;
	return answer;
}

int functionMultiplication (int x, int y){
	int answer;
	answer = x*y;
	return answer;
}

int functionDivision (int x, int y){
	int answer;
	answer = x/y;
	return answer;
}

int functionRemainder (int x, int y){
	int answer;
	answer = x%y;
	return answer;
}

int main (){
	int v1, v2;
	cout << "This program do some calculations with two integer values that you provide" << endl << "Please, give me two integer values:" << endl;
	cin >> v1;
	cin >> v2;
	int sum;
	sum = functionSum(v1,v2);
	cout << "The sum of those two numbers is: " << sum << endl;
	int difference;
	difference = functionDifference(v1, v2);
	cout << "The defference of those two numbers is: " << difference << endl;
	int multiplication;
	multiplication = functionMultiplication(v1,v2);
	cout << "The multiplication of those two numbers is: " << multiplication << endl;
	int division;
	division = functionDivision(v1,v2);
	cout << "The division of those two numbers is: " << division << endl;
	int theremainder;
	theremainder = functionRemainder(v1,v2);
	cout << "the remainder of an integer division between those two numbers is: " << theremainder << endl;
	return 0;
}