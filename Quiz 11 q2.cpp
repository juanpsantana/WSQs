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
			file>>line;
			for (int i=0; i<line.length(); i++){
				if(tolower(line[i],loc)=='b'){
					cout << tolower(line[i],loc);
					if(tolower(line[i+1],loc)=='a'){
											cout << tolower(line[i+1],loc);

						if(tolower(line[i+2],loc)=='n'){
												cout << tolower(line[i+2],loc);

							if(tolower(line[i+3],loc)=='a'){
													cout << tolower(line[i+3],loc);

								if(tolower(line[i+4],loc)=='n'){
														cout << tolower(line[i+4],loc);

									if(tolower(line[i+5],loc)=='a'){
															cout << tolower(line[i+5],loc);

										banana++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return banana;
}

int main (){
cout << "There is " << check_banana("banana.txt") << " bananas" << endl;
	return 0;
}