#include <Sier0x_Engine.h>

class Sandbox : public Sier0x_Engine::Application {

public:
	Sandbox() {


	}
	~Sandbox() {

	}

};

Sier0x_Engine::Application* Sier0x_Engine::CreateApplication() {

	return new Sandbox();

}
