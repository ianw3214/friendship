#pragma once

// TODO: Initialize engine from config file

#include <SDL2/SDL.h>

class Engine {
public:

	static void init();
	static void shutdown();

	// Utility methods
	static int getScreenWidth();
	static int getScreenHeight();
	static void swapScreenBuffer();

	static void resize(int width, int height);

private:

	static SDL_Window * m_window;
	static SDL_GLContext m_context;

	static int m_screenWidth;
	static int m_screenHeight;

};