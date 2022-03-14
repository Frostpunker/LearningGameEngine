#include"Engine.h"

class  Sandbox : public Engine::Application
{
public:
	 Sandbox() = default;
	 ~Sandbox() = default;

private:

};


Engine::Application* Engine::CreateApplication() {
	return new Sandbox();
}