#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <locale>
#include <algorithm>
using namespace std;

int check_banana (string name_file){
	ifstream file (name_file);
	string line;
	int banana;
	locale loc;
	if (file.is_open()){
		while (getline(file, line)){
			std::transform(line.begin(), line.end(),line.begin(),::tolower);
			cout << "Line: " << line << endl;
			size_t index = line.find("banana");
			if(index != std::string::npos){
				cout << "found banana at " << index << endl;
				index = line.find("banana",index+1);
				if(index != std::string::npos){
					cout << "found next banana at " << index << endl;
				}
			}
		}
	}
	return banana;
}

int main (){
	int bananas = check_banana("banana.txt");
//cout << "There is " << bananas << " bananas" << endl;
	return 0;
}