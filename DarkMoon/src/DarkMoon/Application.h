#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace DarkMoon {
	class DARKMOON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_isRuning = true;
	};

	// ��Ҫ�ڿͻ��˳�����
	Application* CreateApplication();
}


