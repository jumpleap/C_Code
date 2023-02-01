#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 9 //行
#define COL 9 //列
#define ROWS ROW + 2
#define COLS COL + 2
#define MINECOUNT 10 //雷的数量

//初始化雷区
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//显示界面
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//设置雷
void setMine(char mine[ROWS][COLS], int row, int col);
//排查雷
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);