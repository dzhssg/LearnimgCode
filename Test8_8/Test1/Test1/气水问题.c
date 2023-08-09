#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int money = 20;
	int Soda = 0;
	int bottle = 0;
	while (money)
	{
		bottle++;
		Soda++;
		money--;
		if (bottle == 2)
		{
			Soda++;
			bottle = 1;
		}
	}
	printf("ø…“‘∫»∆˚ÀÆ%d∆ø", Soda);

	return 0;
}