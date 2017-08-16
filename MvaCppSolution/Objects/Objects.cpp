// Objects.cpp : Defines the entry proint for the console application

#include "Rectangle.h"

int main() {
	int x;
	int y{};
	int z{ 1 };

	Rectangle uninitialized;
	Rectangle const value{};
	Rectangle aggregate{ 4, 7 };

	int area_of_value{ value.area() };
	int area_of_aggregate{ aggregate.area() };

	int vw = value.get_width();
	
	return 0;
}