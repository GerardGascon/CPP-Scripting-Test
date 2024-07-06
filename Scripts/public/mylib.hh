#ifndef C0DE4UN_MYLIB_H
#define C0DE4UN_MYLIB_H

#include <core.hh>
#include <iostream>

class TestScript : Script {
public:
	TestScript();
	~TestScript();
private:
	virtual void OnReady() override {
		std::cout << "ready" << std::endl;
	}
	virtual void OnProcess(float delta) override {
		std::cout << "process" << std::endl;
	}
	virtual void OnPhysicsProcess(float delta) override {
		std::cout << "physics process" << std::endl;
	}
};
#endif