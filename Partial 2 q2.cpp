//Juan Pablo Santana González/A01229382
#include <iostream>
#include <cmath>
using namespace std;

long superpower(long a, long b){
	long result;
	result = pow((a),b);
	return result;
}	

int main(){
	int a, b, answer;
	cout << "Value ?" << endl;
	cin >> a;
	cout << "Power ?" << endl;
	cin >> b;
	answer = superpower(a,b);
	cout << answer << endl;
	return 0;
}	
