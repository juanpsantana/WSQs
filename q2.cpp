#include <iostream>
#include <cstdlib>
using namespace std;

void triangles (int sx){
	for (int i=1; i<=sx; i++){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
	for (int i=(sx-1); i>0; i--){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
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