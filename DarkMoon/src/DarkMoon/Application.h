#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace DarkMoon {
	class DARKMOON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:

	};

	// ��Ҫ�ڿͻ��˳�����
	Application* CreateApplication();
}


