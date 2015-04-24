#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int findThrees(vector<int>& list){
	int sum=0;
	for(int i=0; i<list.size(); i++ ){
		if (list [i]%3==0)
			sum += list [i];
	}
	return sum;
}

int main(){
	vector<int> list {0,1,2,3,4,5,6,7,8,9};
	cout << "The sum of all the number divisibles by three in that list is " << findThrees(list) << endl;
	return 0;
}