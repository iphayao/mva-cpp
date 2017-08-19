#include "Squawker.h"

Squawker::Squawker()
{
	std::cout << "Default constructing\"\"" << std::endl;
}

Squawker::Squawker(std::string n) : name(n) {
	std::cout << "Constructing \"" << name << "\"" << std::endl;
}

Squawker::~Squawker()
{
	std::cout << "Destructing \"" << name << "\"" << std::endl;
}
