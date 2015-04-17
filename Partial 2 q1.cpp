//Juan Pablo Santana González/A01229382
#include <iostream>
using namespace std;

void triangles(int n){
	for (int i=1; i<=n; i++){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}
	for (int i=(n-1);i>0;i--){
		for (int t=1; t<=i;t++){
			cout << "T";
		}
		cout << endl;
	}	
}

int main(){
	int n;
	cout << "Enter size" << endl << endl;
	cin >> n;
	triangles(n);
	return 0;
}	
