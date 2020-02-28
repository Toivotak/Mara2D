#include "Mara.h"

class Dummy : public Mara::Application {

public:
	Dummy() {}
	~Dummy() {}
};

Mara::Application* Mara::CreateApplication() {

	return new Dummy();
}