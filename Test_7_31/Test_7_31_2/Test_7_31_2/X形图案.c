#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void sc(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i || j == (n - i - 1)) //��Ϊj<n,��i=0ʱ j = n���٣����ԣ�n-i-1��
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        sc(n);
    }
    return 0;
}