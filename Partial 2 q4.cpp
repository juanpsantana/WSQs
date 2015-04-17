//Juan Pablo Santana González/A01229382
#include <iostream>
#include <string>
using namespace std;

string swap(string word){
	string drow;
	for (int i=(word.length()-1);i>=0;i--){
		drow += word [i];
	}
	return drow;
	
}

bool isPalindrome(string x){
	string y = swap(x);
	for (int i=0;i<=x.length();i++){
		if(x[i]!=y[i]){
		}
	}
	return true;
}

int main (){
	string word = "aba aba";
	cout << word << endl << swap(word) << endl;
	bool answer = isPalindrome(word);
	if (answer==true){
		cout << "Is Palindrome" << endl;
	} else {
		cout << "Is not Palindrome" << endl;
	}		
	return 0;
}

