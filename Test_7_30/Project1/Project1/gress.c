#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	void menu()	       //��ӡ�˵�
	{
		printf("**********************\n");
		printf("********1.play********\n");
		printf("********2.exit********\n");
		printf("**********************\n");
	}
	void game()         //��������Ϸ��ʵ��
	{
		int count = 5;
		printf("�㻹��%d�λ���",count);
		printf("�������:");
		int guess = 0;
		int r = rand() % 100 + 1;
		while (count)		//��ѭ��
		{
			scanf("%d", &guess);
			if (guess > r)
			{
				printf("�´���\n");
			}
			else if (guess < r)
			{
				printf("��С��\n");
			}
			else
			{
				printf("��ϲ�㣬�¶���\n");
				break;		//�¶��ˣ�����ѭ��
			}
			count--;
		}
		printf("���ź�����û����5���ڲ³���ȷ���֣���ȷ������%d\n", r);
	}
	int main()
	{
		int n = 0;
		srand((unsigned int)time(NULL));		//���������
		do
		{
			menu();
			scanf("%d", &n);
			switch (n)
			{
			case 0:
				printf("�˳���Ϸ:\n");
				break;
			case 1:
				printf("��ʼ��Ϸ:\n");
				game();
				break;
			default:
				printf("�����������������:");
				break;
			}
		} while (n);
	}