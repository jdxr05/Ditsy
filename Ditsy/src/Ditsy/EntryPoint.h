#pragma once

#ifdef DS_PLATFORM_WINDOWS

extern Ditsy::Application* Ditsy::CreateApplication();

int main(int argc, char** argv)
{
	Ditsy::Log::Init();

	// Log Test
	DS_CORE_WARN("Initialized Log!");
	int a = 5;
	DS_INFO("Hello! Var={0}", a);

	auto app = Ditsy::CreateApplication();
	app->Run();
	delete app;
}

#endif