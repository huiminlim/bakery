#include <foo.hpp>

#include <iostream>

Foo::Foo() {
	std::cout << "ctor" << std::endl;
}

Foo::~Foo() {
	std::cout << "dtor" << std::endl;
}
