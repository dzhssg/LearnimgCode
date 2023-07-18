#include <stdio.h>
int main()
{
	int sum = 0;
	int	num = 1;
	int	n = 0;
	int i = 0;
	for (n = 1;n<=3; n++)
	{
		num = 1;
		for (i = 1; i <= n; i++)
		{
			num *= i;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}