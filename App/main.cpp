#include <iostream>
#include <Test2.hh>
#include <ScriptManager.hh>

int main() {
	std::cout << "Hello, World!" << std::endl;
	
	TestScript* test = new TestScript();
	
	char c;
	while ((std::cin >> c) && c != 'r'){ 
		ScriptManager::OnProcess(1.f);
	}
	
	delete test;
	
	std::cin.get();

	return 0;
}