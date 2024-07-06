#ifndef C0DE4UN_MYLIB_H
	#define MYLIB_EXPORT
#endif
#include "../public/Test2.hh"

#include <iostream>

TestScript::TestScript() {
	std::cout << "test create" << std::endl;
}

TestScript::~TestScript() {
	std::cout << "test destroy" << std::endl;
}
