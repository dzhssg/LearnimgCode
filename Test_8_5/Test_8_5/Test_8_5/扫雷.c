#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()		//��ӡ�˵�
{
	printf("*****************************\n");
	printf("***********1.play************\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS,'0');//'0'   
	InitBoard(show, ROWS, COLS,'*');//'*'  
	//���̴�ӡ
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	FineMine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("ɨ����Ϸ����\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	}while(input);
	return 0;
}