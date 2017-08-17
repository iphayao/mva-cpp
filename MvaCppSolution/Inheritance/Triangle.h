#pragma once
#include "Shape.h"

class Triangle : public Shape {
private:
	int _width;
	int _height;

public:
	Triangle() : _width{ 1 }, _height{ 1 } {

	}

	Triangle(int initial_width, int initial_height)
		: _width{ initial_width }, _height{ initial_height } {

	}

	int get_width() const { return _width; }
	int get_height() const { return _height; }

	void resize(int new_width, int new_height) {
		_width = new_width;
		_height = new_height;
	}

	int area() const;
};
