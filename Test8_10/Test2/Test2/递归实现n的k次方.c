#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Power(int n,int k)
{	
	if (k == 0)			//k = 0 Ê±£¬n = 1

	{
		return 1;
	}
	else if (k > 0)		//k > 0 Ê±£¬n ^ k = n * n ^ (k - 1)
	{
		return Power(n, --k) * n;
	}
	else				//k < 0 Ê±£¬n ^ k = 1.0 / n ^ (-k)
	{
		return 1.0 / pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Power(n, k);
	printf("%lf", ret);
	return 0;
}