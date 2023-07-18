#include<stdio.h>
int main() {
	float a = 0, b = 0;
	char c;
	scanf_s("%f %c %f", &a, &c,1,&b,1);
	if (c == '+')
		printf("计算结果是 %f", a + b);
	if (c == '*')
		printf("计算结果是 %f", a * b);
	if (c == '-')
		printf("计算结果是 %f", a - b);
	if (c == '/')
		printf("计算结果是 %f", a / b);
	return 0;
}