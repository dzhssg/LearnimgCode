#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//  int ret = isupper('Q');
//  printf("%d\n", ret);
//  return 0;
//}
//
//int main()
//{
//  int ret = isupper('Q');
//  printf("%d\n", ret);
//  return 0;
//}
//
//int main()
//{
//  //1. 遍历字符串
//  //2. 发现小写字母转大写
//  char arr[] = "I am A STudent";
//  size_t len = strlen(arr);
//  size_t i = 0;
//  for (i = 0; i < len; i++)
//  {
//    if (islower(arr[i]))
//    {
//      //转大写
//      //str[i] = str[i] - 32;
//      arr[i]=toupper(arr[i]);
//    }
//  }
//  printf("%s\n", arr);
//  return 0;
//}

//int main()
//{
//  char ch = 'a';
// 
//  //ch = ch - 32;
//  ch = toupper(ch);
//  printf("%c\n", ch);
//
//  return 0;
//}



//int main()
//{
	//strlen - 求字符串长度的
	//字符串的结束标志是\0
	//strlen统计的是\0之前出现的字符的个数
	//基本功能
	//char arr[] = "abcdef";
	////a b c d e f \0
	//size_t len = strlen(arr);
	//printf("%zd\n", len);

	//1. strlen函数要正确获得字符串长度的话，字符串中必须得有\0
	/*char arr[] = { 'a', 'b', 'c' , '\0'};
	size_t len = strlen(arr);
	printf("%zd\n", len);*/

	//2. 要注意strlen的返回值类型是size_t
	//3               - 6
	//-3
	//
	/*if (strlen("abc") - strlen("abcdef") > 0)
		printf(">\n");
	else
		printf("<=\n");

	return 0;
}*/



//int main()
//{
//  const char* str1 = "abcdef";
//  const char* str2 = "bbb";
//  if ((int)strlen(str2) - (int)strlen(str1) > 0)
//  {
//    printf("str2>str1\n");
//  }
//  else
//  {
//    printf("srt1>str2\n");
//  }
//  return 0;
//}

//size_t my_strlen(const char* str)
//{
//  int count = 0;//计数
//  assert(str);
//  while (*str)//当*str=\0时会跳出循环
//  {
//    str++;
//    count++;
//  }
//  return count;
//}


//size_t my_strlen(const char* str)
//{
//  if (*str == '\0')
//    return 0;
//  else
//    return 1 + my_strlen(++str);
//  //递归这里不要用str++,先使用再++，传进去还是原来的数
//  //虽然这里++str可以，但是在递归里面还是不建议使用'++'的方式
//  //因为'++'会改变str,留下隐患，而'str+1'的方式不会
//}
//
//
//int main()
//{
//  char arr[] = "abcdef";
//  size_t ret = my_strlen(arr);
//  printf("%zd", ret);
//}


//函数的功能：拷贝字符串
//注意事项：
//1. 源字符串中必须包含\0，同时\0也会被拷贝到目标空间
//2. 程序员自己要保证目标空间要足够大，能放得下拷贝来的数据
//3. 保证目标空间必须可以修改
//
//int main()
//{
//	char arr1[] =   "hello abc";
//	char arr2[3] = "xxx";
//  strcpy(arr2, arr1);
//  printf("arr1= %s \n", arr2);
//  printf("arr2= %s ", arr2);
//}
//int main()
//{
//  char arr1[] = {'a','b','c'};
//  char arr2[3] = "xxx";
//  strcpy(arr2, arr1);
//  printf("arr1= %s \n", arr2);
//  printf("arr2= %s ", arr2);
//}

//int main()
//{
//  char arr1[4] = "abc";
//  const char* p = "qwertyuiop";//常量字符串 - 不可以修改的
//  strcpy(p, arr1);
//  printf("%s\n", p);
//  return 0;
//}



//int main()
//{
//  char arr1[20] = "hello\0xxxxxxxx ";
//  char* p = "world";
//  printf("%s\n", strcat(arr1, p));
//  return 0;
//}



char* my_strcat(char* str2, const char* str1)
{
	char* ret = str2;
	assert(str2 && str1);
	//1. 找到目标空间中的\0
	while (*str2 != '\0')
	{
		str2++;
	}
	//2. 拷贝数据
	while (*str2++ = *str1++)
	{
		;
	}
	return ret;
}

int main()
{
  char arr1[20] = "hello ";//hello 
  char arr2[10] = "world";
  printf("%s\n", my_strcat(arr1, arr2));
  return 0;
}

