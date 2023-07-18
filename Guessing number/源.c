#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***********************\n");
	printf("***      1.play     ***\n");
	printf("***      0.exit     ***\n");
	printf("***********************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	/*printf("%d\n", ret); */
	int guess = 0;
	printf("请猜数字\n");
	while(1)
	{
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	

	int input = 0;
		do
		{
			menu();
			printf("请选择：>\n");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:printf("退出游戏");
				break;
			default:printf("输入错误");
				break;
			}
		} while (input);
		return  0;
}