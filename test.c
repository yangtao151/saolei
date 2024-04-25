#include "game.h"
void menu()
{
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
}
void game()
{ 
	char board1[ROWS][COLS] = {0};
	char board2[ROWS][COLS] = {0};
	//初始化棋盘
	initboard(board1, ROWS, COLS, '0');
	initboard(board2, ROWS, COLS, '*');
	//打印棋盘
	displayboard(board2, ROW, COL);
	//放雷
	 setboard(board1, ROW, COL);
	//displayboard(board1, ROW, COL);
	 //扫雷
	 cleanboard(board1, board2 ,ROW, COL);


}
int main ()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}