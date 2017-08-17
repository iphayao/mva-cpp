// Inheritance.cpp : Defines the entry proint for the console application
#include "Triangle.h"
#include "NamedRectangle.h"

void double_dimensions(Rectangle& rectangle) {
	rectangle.resize(rectangle.get_width() * 2, rectangle.get_height() * 2);
}

int compute_area(const Shape& a_shape) {
	return a_shape.area();
}

int main() {
	NamedRectangle fred_rectangle{ "Fred", 3, 4 };
	int fred_area{ fred_rectangle.area() };

	Rectangle unnamed_rectangle{ fred_rectangle };

	Rectangle& fred_ref{ fred_rectangle };
	fred_ref.resize(6, 8);
	fred_area = fred_rectangle.area();

	std::string fredname = fred_rectangle.get_name();

	Triangle triangle{ 2, 2 };
	fred_area = compute_area(fred_rectangle);
	int triangle_area = compute_area(triangle);

	return 0;
}