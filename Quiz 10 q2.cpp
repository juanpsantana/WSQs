#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int dotProduct(vector<int> v1, vector<int> v2){
	int sum=0;
	if (v1.size()!=v2.size()){
		cout << "Not same size vectors" << endl;
		return -1;
	}
	for (int i =0; i<v1.size(); i++){
		sum += v1[i]*v2[i];
	}
	return sum;
}

int main(){
	vector<int> v1 {1,2,3,4};
	vector<int> v2 {2,4,5,6};
	cout << "The dot Product of v1 and v2 is " << dotProduct(v1, v2) << endl;
	return 0;
}