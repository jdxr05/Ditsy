#pragma once

#ifdef DS_PLATFORM_WINDOWS

extern Ditsy::Application* Ditsy::CreateApplication();

int main(int argc, char** argv)
{
	printf("Ditsy Engine \n");
	auto app = Ditsy::CreateApplication();
	app->Run();
	delete app;
}

#endif