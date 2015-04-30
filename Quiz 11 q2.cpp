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
			/*
			file>>line;
			for (int i=0; i<line.length(); i++){
				if(tolower(line[i],loc)=='b'){
					if(tolower(line[i+1],loc)=='a'){
						if(tolower(line[i+2],loc)=='n'){
							if(tolower(line[i+3],loc)=='a'){
								if(tolower(line[i+4],loc)=='n'){
									if(tolower(line[i+5],loc)=='a'){
										banana++;
									}
								}
							}
						}
					}
				}
			}
			*/
		}
	}
	return banana;
}

int main (){
	int bananas = check_banana("banana.txt");
//cout << "There is " << bananas << " bananas" << endl;
	return 0;
}