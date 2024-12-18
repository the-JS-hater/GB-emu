#include <stdio.h>
#include <raylib.h>
#include <../include/memory.h>
#include <../include/cpu.h>



const int PIXEL_SIZE = 5;
const int DISPLAY_HEIGTH = 144 * PIXEL_SIZE;
const int DISPLAY_WIDTH = 160 * PIXEL_SIZE;


int main() {
	
	SetTraceLogLevel(LOG_NONE); //make raylib shut up
	InitWindow(DISPLAY_WIDTH, DISPLAY_HEIGTH, "GameBoy display");
	SetTargetFPS(60); //Should ideally be 59.7275
	

	while (!WindowShouldClose())
	{
		ClearBackground(BLACK);
		
		BeginDrawing();

		EndDrawing();
	}

	CloseWindow();
}
