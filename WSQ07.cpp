//Juan Pablo Santana 
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int a, b,k;
	int memory, finalresult;
	cout << "We will calculate the sum of all integers between a range that you privide" << endl;
	cout << "Please write the lower and higher bpuns of the sumatory" << endl;
	cin >> a;
	cin >> b;
	k=a;
	if (b<a){
		k=b;
		b=a;
	}
	memory=0;
	while (k!=b){
		finalresult=k+memory;
		memory=finalresult;
		k=k+1;
	}
	if (k=b){
		finalresult=k+memory;
	}
	cout << "The sum of all the integers between the range you provided (inclusive) is " << finalresult << endl;
	return 0;
}	