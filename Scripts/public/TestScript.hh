#ifndef C0DE4UN_MYLIB_H
#define C0DE4UN_MYLIB_H

#include <Core.hh>
#include <iostream>

class TestScript : Script {
public:
	TestScript(std::string name);
	~TestScript();
private:
	virtual void OnReady() override {
		std::cout << m_Name << " ready" << std::endl;
	}
	virtual void OnProcess(float delta) override {
		std::cout << m_Name << " process delta: " << delta << std::endl;
	}
	virtual void OnPhysicsProcess(float delta) override {
		std::cout << m_Name << " physics process delta: " << delta << std::endl;
	}
private:
	std::string m_Name;
};
#endif