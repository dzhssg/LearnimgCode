#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d,%d", &a, &b);
	int max = 0;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	while (1)
	{
		if (a % max == 0 && b % max == 0)
		{
			printf("%d", max);
			break;
		}
		max--;
	}
	return 0;
}