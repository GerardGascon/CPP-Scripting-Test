//
// Created by ggasc on 06/07/2024.
//

#include "../public/Core.hh"

#include <iostream>

std::list<Script*> Script::instances;

Script::Script() {
	instances.push_back(this);
	std::cout << "base init" << std::endl;
}

Script::~Script() {
	instances.remove(this);
	std::cout << "base destroy" << std::endl;
}
