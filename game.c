#include "game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows ; i++)
	{
		for (j = 0; j < cols ; j++)
			board[i][j] = a;
	}

}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("扫雷游戏\n");
	for (j = 0; j <= col; j++)
		printf("%d ", j);
	        printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);
		   printf("\n");
	}
}
void setboard(char board[ROWS][COLS], int row, int col)
{
	
	int i, j;
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}
int fun(char board1[ROWS][COLS], int x, int y)
{
	return (board1[x - 1][y - 1] - '0' +
	   board1[x + 1][y + 1] - '0' +
		board1[x + 1][y] - '0' +
		board1[x][y + 1] - '0' +
		board1[x - 1][y] - '0' +
		board1[x][y - 1] - '0' +
		board1[x - 1][y + 1] - '0' +
		board1[x + 1][y - 1] - '0');
}
void cleanboard(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int win = 0;
	int count = 10;
	int x, y;
	
	while (win < row * col - count)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
			if (board2[x][y] == '*')
			{
				if (board1[x][y] == '1')
				{
					printf("游戏失败\n");
					displayboard(board1, ROW, COL);
					break;
				}
				else
				{
					int num = fun(board1, x, y);
					board2[x][y] = num + '0';
					displayboard(board2, ROW, COL);
					win++;
				}
				
			}
			else
				printf("重复输入了重新输入\n");
		}
		else
			printf("坐标超过范围重新输入\n");
	}
	if (count == row * col - win)
	{
		printf("你赢了\n");
		displayboard(board2, ROW, COL);
	}

}



