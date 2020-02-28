#pragma once
#include "Core.h"

namespace Mara {

	class MARA2D_API Application {
	
	public:
		Application();

		void Run();

		virtual ~Application();
	};

	Application* CreateApplication(); //defined in client
};

