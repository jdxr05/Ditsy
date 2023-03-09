#pragma once

#include "Core.h"

namespace Ditsy {

	class DAISY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}