#pragma once
#include <iostream>
#include <string>

class Squawker
{
public:
	Squawker();
	Squawker(std::string n);
	~Squawker();

private:
	std::string name;
};