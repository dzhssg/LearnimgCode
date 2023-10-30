#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//size_t my_strlen(const char *str)
//{
//  assert(str);
//  if (*str == '\0')
//  {
//    return 0;
//  }
//  else
//  {
//    return 1 + my_strlen(str + 1);
//  }
//}
//
//int main()
//{
//  char arr[] = "abcdef";
//  size_t ret = my_strlen(arr);
//  printf("%d", ret);
//}




char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//NULL
	assert(dest);
	assert(src);

	while (*dest++ = *src++)
	{
		;
	}

	return ret;//目标空间的起始地址返回
}


int main()
{
  char arr1[] = "abcdef";
  char arr2[20] = { 0 };
  //链式访问
  printf("%s\n", my_strcpy(arr2, arr1));

  return 0;
}
