﻿#pragma once
#include <iostream>
#include <SDL_stdinc.h>
#include <SDL_scancode.h>
#include <SDL_rect.h>
using namespace std;
//Length of each square's edge
const int LENGTH_SQUARE = 30;

//Number of square on board
const int WIDTH_SQUARE = 15;
const int HEIGHT_SQUARE = 22;

// TIME HOLDER index of each key
const int LEFT_ARROW = 0;
const int UP_ARROW = 1;
const int DOWN_ARROW = 2;
const int RIGHT_ARROW = 3;
const int SPACE = 4;

//Text Config
const int FONT_SIZE = 36;
// Task Bar Game Viewport
const SDL_Rect TASK_BAR_VIEWPORT = { 0, 0, WIDTH_SQUARE * LENGTH_SQUARE, 60 };


//Renderer Viewport
const SDL_Rect BOARD_VIEWPORT = { 0, TASK_BAR_VIEWPORT.h, WIDTH_SQUARE * LENGTH_SQUARE, HEIGHT_SQUARE * LENGTH_SQUARE };
const SDL_Rect SCORE_VIEWPORT = { BOARD_VIEWPORT.w, 0, 198, TASK_BAR_VIEWPORT.h + BOARD_VIEWPORT.h };
//extern int TIME_HOLDER[4];

//Window Config
const int SCREEN_WIDTH = BOARD_VIEWPORT.w + SCORE_VIEWPORT.w;
const int SCREEN_HEIGHT = BOARD_VIEWPORT.h + TASK_BAR_VIEWPORT.h;

//View index in arr_view
const int NUMBER_ELEMENT_VIEW	= 6;
const int NOTIFICATION_VIEW		= 0;
const int BACKGROUND_VIEW		= 1;
const int HIGH_SCORE_FRAME		= 2;
const int SCORE_FRAME			= 3;
const int INTRO_1				= 4;
const int INTRO_2				= 5;

//TextView index in arr_textview
const int NUMBER_ELEMENT_TEXTVIEW				= 7;
const int NUMBER_ELEMENT_TEXTVIEW_ON_PLAYING	= 5;
const int SCORE_TEXT							= 0;
const int SCORE_NUMBER							= 1;
const int HIGH_SCORE_TEXT						= 2;
const int HIGH_SCORE_NUMBER						= 3;
const int COMBO									= 4;
const int PAUSE_TEXT							= 5;
const int GAME_OVER_TEXT						= 6;

//Button index in arr_button
const int NUMBER_ELEMENT_BUTTON				= 4;
const int NUMBER_ELEMENT_BUTTON_ON_PLAYING	= 1;
const int PAUSE_BUTTON						= 0;
const int RESUME_BUTTON						= 1;
const int REPLAY_BUTTON						= 2;
const int HOME_BUTTON						= 3;

//View index in gui_view
const int NUMBER_ELEMENT_GUI_VIEW = 4;
const int GUI_BACKGROUND = 0;
const int GAME_TITLE = 1;
const int MENU_BACKGROUND = 2;
const int SELECT_BACKGOUND = 3;

//Button index in gui_button
const int NUMBER_ELEMENT_GUI_BUTTON = 8;
const int NUMBER_ELEMENT_GUI_RENDER_BUTTON = 3;
const int PLAY_GUI_BUTTON = 0;
const int LEVEL_1 = 1;
const int LEVEL_2 = 2;
const int LEVEL_3 = 3;
const int AUDIO_ON = 4;
const int AUDIO_OFF = 5;
// SDL Color 
const int NUMBER_ELEMENT_COLOR	= 3;
const int SCORE_COLOR			= 0;
const int HIGH_SCORE_COLOR		= 1;
const int PAUSED_TEXT_COLOR		= 2;

//Mix Chunk
const int NUMBER_ELEMENT_CHUNK = 6;
const int MOVE_CHUNK = 0;
const int DROP_CHUNK = 1;
const int LINE_CLEAR_CHUNK = 2;
const int GAME_OVER_CHUNK = 3;
const int ROTATE_CHUNK = 4;
const int HARD_DROP_CHUNK = 5;



//Game Status
const int GAME_PLAYING	= 0;
const int GAME_PAUSED	= 1;
const int GAME_ON_GUI	= 3;
const int GAME_EXIT		= 4;
const int GAME_REPLAY = 5;
const int GAME_OVER = 6;
const int FIGURE[7][4] = {
							{5,  6,  7,   8}, // S
							{4,  5,  8,   9}, // Z
							{2,  6, 10,  14}, // I
							{2,  5,  8,   9}, // L
							{2,  5,  7,   8}, // _|
							{4,  5,  6,   8}, // T 
							{6,  7,  10, 11}  // O
};
const int LENGTH_EDGE[7] = { 3, 3, 4, 3, 3, 3, 4 };

// Bởi vì Board vượt quá 4 ô vuông trên TOP để hiển thị khối tại điểm bắt đầu
// để truy cập player_board [x] [y] phải truy cập board [OFFSET_X + x] [OFFSET_Y + y]  
const int OFFSET_X = 2;
const int OFFSET_Y = 4;

void rotate(int matrix[][4], int n);
void copyMatrix(int src[][4], int des[][4], int n);
void copyBoard(int** src, int des[][WIDTH_SQUARE + 2 * OFFSET_X]);
