#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 9 //��
#define COL 9 //��
#define ROWS ROW + 2
#define COLS COL + 2
#define MINECOUNT 10 //�׵�����

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ʾ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void setMine(char mine[ROWS][COLS], int row, int col);
//�Ų���
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);