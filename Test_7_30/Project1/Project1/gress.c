#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	void menu()	       //打印菜单
	{
		printf("**********************\n");
		printf("********1.play********\n");
		printf("********2.exit********\n");
		printf("**********************\n");
	}
	void game()         //猜数字游戏的实现
	{
		int count = 5;
		printf("你还有%d次机会",count);
		printf("请猜数字:");
		int guess = 0;
		int r = rand() % 100 + 1;
		while (count)		//死循环
		{
			scanf("%d", &guess);
			if (guess > r)
			{
				printf("猜大了\n");
			}
			else if (guess < r)
			{
				printf("猜小了\n");
			}
			else
			{
				printf("恭喜你，猜对了\n");
				break;		//猜对了，跳出循环
			}
			count--;
		}
		printf("很遗憾，你没有在5次内猜出正确数字，正确数字是%d\n", r);
	}
	int main()
	{
		int n = 0;
		srand((unsigned int)time(NULL));		//生成随机数
		do
		{
			menu();
			scanf("%d", &n);
			switch (n)
			{
			case 0:
				printf("退出游戏:\n");
				break;
			case 1:
				printf("开始游戏:\n");
				game();
				break;
			default:
				printf("输入错误，请重新输入:");
				break;
			}
		} while (n);
	}