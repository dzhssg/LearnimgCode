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
	printf("�������\n");
	while(1)
	{
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
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
			printf("��ѡ��>\n");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:printf("�˳���Ϸ");
				break;
			default:printf("�������");
				break;
			}
		} while (input);
		return  0;
}