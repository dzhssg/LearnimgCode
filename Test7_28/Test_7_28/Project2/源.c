#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i;
    int temp[5];
    int str1[5] = { 1,2,3,4,5 };
    int str2[5] = { 6,7,8,9,10 };
    for (i = 0; i <= 3; i++)
    {
        temp[i] = str1[i];
        str1[i] = str2[i];
        str2[i] = temp[i];
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", str1[i]);
    }
    printf("\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", str2[i]);
    }

    return 0;

}

