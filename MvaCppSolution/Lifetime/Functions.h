#pragma once

#include <iostream>
#include <memory>
#include "Squawker.h"

void allocate() {
	try {
		Squawker inner{ "Inner" };
		std::unique_ptr<Squawker> pS{ new Squawker{ "Heap" } };
		throw (std::exception{ "Troble" });
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
