#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication(); //this function will be found in the client app

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run(); //need arrow since sandbox is a pointer, the gameloop
	delete app; //remove from heap
}

#endif
