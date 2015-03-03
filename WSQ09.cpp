#include <iostream>
#include <cstdlib>
using namespace std;

int factorial_SUM (){
	int number, n; //Number that the user provide
	long long int memory, counter, final_result;
	cout << "Please, give me a positive number (bigger than 0)" << endl;
	cin >> number;
	if (number<0){
		number=-number;
	}
	if (number==0){
		final_result=1;
	}
	else{
		n = number;
		memory=1;
		while (number>0){
			memory = memory * number;
			number = number-1;
			final_result =memory;
		}
	}
	cout << "The factorial product of " << n << "! is " << final_result << endl;
	char user_answer;
	cout << "Do you want to do this again?" << endl;
	cin >> user_answer;
	if (user_answer=='y'){
		factorial_SUM();
	}
	if (user_answer=='n'){
		cout <<"Have a nice day!" << endl;
	}
	return 0;
}
int main(){
	long long int function;
	cout << "This program will make the product of a factorial number" << endl;
	function = factorial_SUM();
	return 0;

}