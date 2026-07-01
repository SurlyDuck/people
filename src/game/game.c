#include "../engine.h"

#define GAME_WIDTH  800
#define GAME_HEIGHT 600
#define FPS         60

game InitGame(){
	return (game) {
		.width  = GAME_WIDTH,
		.height = GAME_HEIGHT,
		.fps        = FPS,
		.title      = "Game Title"};
}

void UpdateGame(float fps){


}
