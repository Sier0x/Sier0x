#pragma once

#ifdef SX_PLATFORM_WINDOWS

extern Sier0x_Engine::Application* Sier0x_Engine::CreateApplication();

int main(int argc, char**  argv) {

	printf("Start Sier0x_Engine\n");
	auto app = Sier0x_Engine::CreateApplication();
	app->Run();
	delete app;

}


#else
	#error Sier0x only supports Windows! 
#endif // SX_PLATFORM_WINDOWS

