#pragma once
#include"Core.h"
namespace Engine {
	class ENGINE_API Application
	{
	public:
		Application() = default;
		virtual ~Application() = default;
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

