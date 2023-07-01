#include "game.h"
#include "surface.h"
#include <cstdio> //printf

namespace Tmpl8
{
	// -----------------------------------------------------------
	// Initialize the application
	// -----------------------------------------------------------
	void Game::Init()
	{
	}
	
	// -----------------------------------------------------------
	// Close down application
	// -----------------------------------------------------------
	void Game::Shutdown()
	{
		// test 2
	}

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;

	// -----------------------------------------------------------
	// Main application tick function
	// -----------------------------------------------------------
	void Game::Tick(float deltaTime)
	{
		screen->Clear(0);
		// print something in the graphics window
		screen->Print("hello world", 2, 2, 0xffffff);
		// draw a sprite
		rotatingGun.SetFrame(frame);
		rotatingGun.Draw(screen, 100, 100);
		if (++frame == 36) frame = 0;

		// Change om ff te testen
		// alles goed?
		// ja hoor
		// wa fijn
	}
};