#pragma once
#include "main.h"
#include "constants.h"
#include "sprites.h"

class Game {
    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
		bool running;
		bool initialization_failed;
		Uint32 last_frame_update_time;
		///-------------- Sprites ----------------
		Pipe* pipe;	

    public:
        Game();
        void run();
		~Game();

	private:
		void initialize_window();	
		void initialize_renderer();	
		void initialize_pipe();
        void render();
};