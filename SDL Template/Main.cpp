#include "Engine.h"


// Main function.
int main(int argc, char* args[]) // Main MUST have these parameters for SDL.
{
	Engine e;
	return e.run();  // Return Engine::Instance().run();
}