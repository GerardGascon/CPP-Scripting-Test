#ifndef C0DE4UN_MYLIB_H
	#define MYLIB_EXPORT
#endif
#include "../public/TestScript.hh"

#include <iostream>
#include <utility>

TestScript::TestScript(std::string name) : m_Name(std::move(name)) {
	std::cout << m_Name << " init" << std::endl;
}

TestScript::~TestScript() {
	std::cout << m_Name << " destroy" << std::endl;
}
