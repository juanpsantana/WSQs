#include <iostream>
#include <cstdlib>
using namespace std;

int triangles (int size){
	for (int i=1; i<=size; i++){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
	for (int i=(size-1); i>0; i--){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
	return 0;
}

int main()
{
	int size;
	cout << "Please, give me the length of the middle line of the triangle" << endl;
	cin >> size;
	cout << endl << endl;
	triangles(size);
	return 0;
}