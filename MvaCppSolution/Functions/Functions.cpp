// Functions.cpp : Defines the entry proint for the console application

#include "Utilities.h"

int main() {
	int i{ 4 };
	const int j{ AddTwo(i) };
	int const k{ AddTwo(i) };

	AddTwo(j);

	//j = AddTwo(j);	// const cannot be change
	i = AddTwo(j);

	//k = 7;			// const cannot be change
	i = 7;
	
	return 0;
}