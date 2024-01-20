#include <baz/baz.hpp>

#include <iostream>

Baz::Baz() {
	std::cout << "ctor" << std::endl;
}

Baz::~Baz() {
	std::cout << "dtor" << std::endl;
}
