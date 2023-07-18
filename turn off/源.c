#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请注意，你的电脑将在1分钟内关机，若输入：我是猪，就取消关机。\n");
	scanf_s("%s", &input);
again:
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}