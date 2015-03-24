#include <iostream>
#include <cstdlib>
#include <sstream>
#include "BigIntegerLibrary.hh"
using namespace std;

string Convert_to_string(BigInteger num){
	string Num = bigIntegerToString(num);
	return Num;
}

BigInteger Convert_to_int(string Num){
	BigInteger num = stringToBigInteger(Num);
	return num;
}

BigInteger Switch_num(BigInteger num){
	BigInteger mun;
	string Num, Mun;
	Num = Convert_to_string(num);
	Mun= string(Num.rbegin(),Num.rend());
	mun = Convert_to_int(Mun);
	return mun;
}

int Value_to_assing(int range_position, int lower_bound){
	int value;
	value = range_position + lower_bound;
	return value;
}

BigInteger Evaluate_value(BigInteger value){
	BigInteger mun;
	BigInteger num = value;
	int type = 3;
	for(int k = 1; k<=30; k++){
		mun = Switch_num(num);
		cout << "num is " << num << ", mun is " << mun << ", k is " << k << endl;
		if (num==mun){
			if(k==1){
				type =1;
				return 1;
			}
			else {
				type=2;
				return 2;
			}
		}
		else{
			num = num + mun; 
		}
	}
	if (type==3){
		cout << "Lychrel number found: " << value << endl;
	}
	return 3;
}

BigInteger Evaluate_range(BigInteger range[], int size){
	int palindrome=0, non_Lychrel=0, Lychrel=0; 
	BigInteger evaluation;
	for (int i = 0; i<size; i++){
		evaluation =Evaluate_value(range[i]);
		if (evaluation==1){
			palindrome++;
		}
		if (evaluation==2){
			non_Lychrel++;
		}
		if (evaluation==3){
			Lychrel++;
		}
	}
	cout << "Palindrome numbers found: " << palindrome << endl;
	cout << "Non-Lychrel numbers found: " << non_Lychrel << endl;
	cout << "Lychrel numbers found: " << Lychrel << endl;
	return 0;
}

int main (){
	int lower_bound, higher_bound;
	cout << "This program evaluate all the numbers in a range you provide and shows how much palindrome numbers, non-Lychrel numbers and Lychrel are. Also print the Lychrel numbers:" << endl;
	cout << "Please, give me the lower bound of the range to evaluate: " << endl;
	cin >> lower_bound;
	cout << "Please, give me the higher bound of the range to evaluate: " << endl;
	cin >> higher_bound;
	int range_size;
	range_size= higher_bound - lower_bound + 1;
	BigInteger range[range_size];
	int range_position=0;
	while(range_position<range_size){
		range[range_position]=Value_to_assing(range_position, lower_bound);
		range_position++;
	}

	Evaluate_range(range, range_size);
	return 0;
}