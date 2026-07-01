#include "engine.h"

int main(){
	game gameEnv = InitGame();
	SetTargetFPS(gameEnv.fps);
	InitWindow(gameEnv.width, gameEnv.height, gameEnv.title);

	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(RED);
		EndDrawing();
	
	}

	return 0;
}
