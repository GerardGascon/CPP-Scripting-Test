#include <iostream>
#include <TestScript.hh>
#include <ScriptManager.hh>

int main() {
	TestScript* test1 = new TestScript("test1");
	TestScript* test2 = new TestScript("test2");

	std::cout << std::endl << "Test OnProcess() with OnReady() not called yet" << std::endl << std::endl;
	for (int i = 0; i < 5; ++i) {
		ScriptManager::OnProcess((float)i);
	}
	
	std::cout << std::endl << "Test OnPhysicsProcess()" << std::endl << std::endl;
	for (int i = 0; i < 5; ++i) {
		ScriptManager::OnPhysicsProcess((float)i);
	}
	
	std::cout << std::endl << "Test OnProcess() with OnReady() already called" << std::endl << std::endl;
	for (int i = 0; i < 5; ++i) {
		ScriptManager::OnProcess((float)i);
	}

	std::cout << std::endl;
	delete test2;
	delete test1;

	return 0;
}