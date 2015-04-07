#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string swap(string word){
	string drow = "";
	for (int i=word.length()-1; i>=0; i--){
		drow += word[i] ;
	}
	return drow;
}

bool evaluate(string word, string drow){
	for (int i=0; i<=word.length();i++){
		if (word [i]!=drow[i]){
			return false;
		}
	}
	return true;
}

int main(){
	string word, drow;
	cin >> word;
	drow =swap(word);
	cout << drow << endl;.
	if (evaluate(word, drow)==true) {
		cout << "The word is a palindrome" << endl;
	} else {
		cout << "The word is not a palindrome" << endl;
	}
	return 0;
}
