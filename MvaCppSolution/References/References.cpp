// References.cpp : Defines the entry proint for the console application

void multiply_by_two(int& parameter) {
	parameter = parameter * 2;
}

int main() {
	int x{ 1 };
	int y{ x }; // y i s a copy of x
	multiply_by_two(x);

	int& xref{ x };
	int const& xconstref{ x };

	x = 2;		// assigns the value 2 to x
	xref = 3;	// assigns the value 3 to x
	//xconstref = 4;	// cannot change const reference

	int copy{ xref };	// copies x to a new object named copy
	copy = xconstref;

	return 0;
}