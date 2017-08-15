// String.cpp : Defines the entry proint for the console application

#include <string>
#include <iostream>

using namespace std;

int main() {
	int i{ 2 };
	
	string Hello{ "Hello" };
	
	Hello += " World!";
	
	cout << Hello << endl;
	
	if (Hello == "Hello World!") {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	return 0;
}