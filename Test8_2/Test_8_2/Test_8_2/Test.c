#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int num = 0;
int letter = 0;
int space = 0;
int other = 0;
void StatCharCount(char str[])
{
	int sz = strlen(str);
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		if (str[i] == ' ')
		{
			space++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			num++;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			letter++;
		}
	}
	
}
int main()
{
	char str[100] = {0};
	gets(str);
	StatCharCount(str);
	printf("������������%d\n", num);
	printf("��������ĸ��%d\n", letter);
	printf("�����пո���%d\n", space);
	printf("�����������ַ���%d\n", other);
}