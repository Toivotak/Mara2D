#pragma once

#ifdef MARA_PLATFORM_WINDOWS

extern Mara::Application* Mara::CreateApplication();

int main(int argc, char** argv) {

	auto app = Mara::CreateApplication();
	app->Run();
	delete app;
}

#endif
