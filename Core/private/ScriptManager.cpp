//
// Created by ggasc on 06/07/2024.
//

#include "../public/ScriptManager.hh"

#include "../public/core.hh"

void ScriptManager::OnProcess(float delta) {
	for (Script* s : Script::instances) {
		if (s->initialized){
			s->OnProcess(delta);
		}else{
			s->OnReady();
			s->initialized = true;
		}
	}
}

void ScriptManager::OnPhysicsProcess(float delta) {
	for (Script* s : Script::instances) {
		s->OnPhysicsProcess(delta);
	}
}
