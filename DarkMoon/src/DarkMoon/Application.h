#pragma once

#include "Core.h"

namespace DarkMoon {
	class DRAKMOON_API Application
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


