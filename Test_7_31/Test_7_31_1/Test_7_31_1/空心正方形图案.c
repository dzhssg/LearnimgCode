#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sc(int n)  //�����n���βΡ�
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1) 
            //j�жϵ�һ�������һ����*�����룬i�жϵ�һ�к����һ�е�"*"�����롣
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        sc(n);//��ֵ���ã������n��ʵ�Ρ�
    }
    return 0;
}
