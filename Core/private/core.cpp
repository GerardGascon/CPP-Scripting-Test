//
// Created by ggasc on 06/07/2024.
//

#include "../public/core.hh"

#include <iostream>

std::list<Script*> Script::instances;

Script::Script() {
	instances.push_back(this);
	std::cout << "instantiated" << std::endl;
}

Script::~Script() {
	instances.remove(this);
	std::cout << "removed" << std::endl;
}
