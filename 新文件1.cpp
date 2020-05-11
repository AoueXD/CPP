#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

	int c;
	
	stringstream ss;
	
	string s = "10 20 30 40";
	
	cout <<  s;//
	
	ss << s;
	
	while(ss >> c) {
		cout << c << endl;
	}
} 
