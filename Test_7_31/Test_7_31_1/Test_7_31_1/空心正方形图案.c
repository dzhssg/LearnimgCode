#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sc(int n)  //这里的n是形参。
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1) 
            //j判断第一个和最后一个“*”输入，i判断第一行和最后一行的"*"的输入。
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
        sc(n);//传值调用，这里的n是实参。
    }
    return 0;
}
