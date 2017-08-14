// Types.cpp : Defines the entry proint for the console application
// MSDN's Fundamatal Types (C++): https://msdn.microsoft.com/en-us/library/cc953fe1.aspx

#include <iostream>

int main() {
	// use 'auto' keyword for auto type
	auto i{ 2 };					// i: 2
	i = static_cast<int>(3.2);		// i: 3
	i = static_cast<int>(2.9);		// i: 2
	i = -1;							// i: -1
	std::cout << i << std::endl;

	unsigned int u{ 0 };			//u: 0
	u = -2;							//u: 4294967294

	double d{ 2.7 };				//d: 2.7
	i = static_cast<int>(d);		//i: 2
	d = i;							//d: 2.000000
	std::cout << d << std::endl;

	bool flag{ true };				//flag: true
	flag = false;					//flag: false
	flag = static_cast<bool>(7);	//flag: true
	std::cout << flag << std::endl;

	return 0;
}