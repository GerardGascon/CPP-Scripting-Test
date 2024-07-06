//
// Created by ggasc on 06/07/2024.
//

#ifndef CMAKE_SHARED_LIB_TUTORIAL_CORE_HH
#define CMAKE_SHARED_LIB_TUTORIAL_CORE_HH

#include <list>

class Script {
	friend class ScriptManager;
public:	
	Script();
	virtual ~Script();
	
	virtual void OnReady() { }
	virtual void OnProcess(float delta) { }
	virtual void OnPhysicsProcess(float delta) { }
private:
	bool initialized = false;
private:
	static std::list<Script*> instances;
};



#endif //CMAKE_SHARED_LIB_TUTORIAL_CORE_HH
