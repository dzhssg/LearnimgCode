#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		a = a ^ b;
		b = b ^ a;
		a = a ^ b;
	}
	if (a < c)
	{
		a = a ^ c;
		c = c ^ a;
		a = a ^ c;
	}
	if (b < c)
	{
		b = b ^ c;
		c = c ^ b;
		b = b ^ c;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}