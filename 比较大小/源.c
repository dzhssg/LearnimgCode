#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int max = 0;
	scanf_s("%d %d", &m, &n);
	if (m > n)
	{
		max = m;
	}
	else
	{
		max = n;
	}
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("%d\n", max);
			break;
		}
		max--;
	}

	return 0;
}