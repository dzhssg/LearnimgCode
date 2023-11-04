#define _CRT_SECURE_NO_WARNINGS 1

//#include <assert>

//  int main()
//  {
//    //比较2个字符串
//    int ret = strcmp("abdeqwe", "abq");
//    if (ret > 0)
//      printf(">\n");
//    else if (ret == 0)
//      printf("==\n");
//    else
//      printf("<\n");
//    return 0;
//}

//int main()
//{
//	char arr1[10] = "xxxxxxxxx";
//	char arr2[] = "ab";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[15] = "abc\0xxxxxx";
//	char arr2[] = "ab";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcqwer";
//	int ret = strncmp(arr1, arr2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//  char arr[] = "192.168.6.111";
//  char* sep = ".";
//  char* str = NULL;
//  for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//  {
//    printf("%s\n", str);
//  }
//  return 0;
//}

//const char* my_strstr(const char* str1, const char* str2)
//{
//  assert(str1);
//  assert(str2);
//
//  const char* cp = str1;
//  const char* s1 = NULL;
//  const char* s2 = NULL;
//
//  //如果子串是空字符串，直接返回str1
//  if (*str2 == '\0')
//    return str1;
//
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//			return cp;
//
//		cp++;
//	}
//
//	return NULL;
//}
//
// int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//  char str[] = "This is a simple string";
//  char* pch;
//  pch = strstr(str, "simple");
//  strncpy(pch, "sample", 6);
//  printf("%s\n", str);
//  return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char * ret = strerror(i);
//		printf("%d : %s\n", i, ret);
//	}
//
//  return 0;
//}



#include <stdio.h>
#include <errno.h>

//相关的函数：perror
int main()
{
	FILE* pf = fopen("add.txt", "r");
	if (pf == NULL)
	{
		//printf("打开文件失败，失败的原因: %s\n", strerror(errno));
		perror("fopen");
		printf("fopen: %s\n", strerror(errno));
		return 1;
	}
	else
	{
		printf("打开文件成功\n");
		//...
	}
	return 0;
}
