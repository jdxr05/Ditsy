#include <Ditsy.h>

class Sandbox : public Ditsy::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Ditsy::Application* Ditsy::CreateApplication()
{
	return new Sandbox();
}