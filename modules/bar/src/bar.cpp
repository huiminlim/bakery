#include <bar.hpp>

#include <iostream>

Bar::Bar() {
	std::cout << "ctor" << std::endl;
}

Bar::~Bar() {
	std::cout << "dtor" << std::endl;
}
