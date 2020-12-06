#ifndef	__GAME_H__
#define	__GAME_H__
#define		ROW		10
#define		COL		10

#include <stdio.h>
#include "stdlib.h"
#include "time.h"
void Initboard(char board[ROW][COL]);
void showboard(char board[ROW][COL]);
char PlayerPlay(char board[ROW][COL],int* count);
char ComputerPlay(char board[ROW][COL],int* count);
char findWin(char board[ROW][COL], int x, int y, char chess, int count);
int game();
void menu();
#endif
