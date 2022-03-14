#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

//A function defined somewhere outside that return a application pointer
//And it will be implemented in the client
extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {
	printf("Creating App\n");
	auto app = Engine::CreateApplication();
	printf("Run App\n");
	app->Run();
	delete app;
}
#endif // ENGINE_PLATFORM_WINDOWS
