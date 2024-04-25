#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define  ROW    9
#define  COL    9
#define  ROWS   11
#define  COLS   11
void initboard(char board[ROWS][COLS], int rows, int cols, char a); 
void displayboard(char board[ROWS][COLS], int row, int col);
void setboard(char board[ROWS][COLS], int row, int col);
void cleanboard(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);



