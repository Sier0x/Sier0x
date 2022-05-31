#pragma once

#include "Core.h"

namespace Sier0x_Engine {

	class SIER0X_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();

	private:

	};
	//to be defiend in CLIENT
	Application* CreateApplication();


}
