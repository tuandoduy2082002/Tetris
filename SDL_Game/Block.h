#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <SDL.h>
#include "Common.h"
class Block
{
private:

public:
/*
Type 1:
	3*3

Type 2: (Only I Block)
	4*4
*/
	int matrix[4][4] = { {0} };
	int current_block = -1;
	int current_color = -1;
	SDL_Point matrix_origin_point = { 0,0 };
	Block();
	~Block();
	void rotate(int matrix[][4] = NULL);
};

