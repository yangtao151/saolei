#include "game.h"
void menu()
{
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
}
void game()
{ 
	char board1[ROWS][COLS] = {0};
	char board2[ROWS][COLS] = {0};
	//��ʼ������
	initboard(board1, ROWS, COLS, '0');
	initboard(board2, ROWS, COLS, '*');
	//��ӡ����
	displayboard(board2, ROW, COL);
	//����
	 setboard(board1, ROW, COL);
	//displayboard(board1, ROW, COL);
	 //ɨ��
	 cleanboard(board1, board2 ,ROW, COL);


}
int main ()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}