#include<stdio.h>
int main()
{
	int grade;
	scanf("%d",&grade);
	if(grade>60 && grade<=100)
	switch((grade)/10)
	{
	case 10:
		printf("A");
		break;
	case 9:
		printf("A"); 
		break;
	case 8:
		printf("B"); 
		break;
	case 7:
		printf("C"); 
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("非法成绩");
	}
	else if(grade>=0 && grade<=60)
	{
		printf("E");
	}
	else 
		printf("非法成绩");
}
