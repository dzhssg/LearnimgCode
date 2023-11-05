#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//int  my_strcmp(const char* str1, const char * str2)
//{
//  assert(str1 && str2);
//  while (*str1 == *str2)
//  {
//    
//    if (*str1 == '0')
//    {
//      return 0;
//    }
//    str1++;
//    str2++;
//  }
//    if ((*str1 - *str2) > 0)
//    {
//      return 1;
//    }
//    else
//    {
//      return -1;
//    }
//  }
//
//
//
//int main()
//{
//  char arr1[] = "abcds";
//  char arr2[] = "abcde";
//  printf("%d",strcmp(arr1,arr2));
//}


//const char* my_strstr(const char* str1, const char* str2)
//{
//  assert(str1);
//  assert(str2);
//  const char* p = str1;
//  const char* s1 = NULL;
//  const char* s2 = NULL;
//  if (*str2 == '\0')
//  {
//    return str1;
//  }
//  while (*p)
//  {
//      s1 = p;
//      s2 = str2;
//      while (*s1 == *s2 && * s1 && *s2)
//      {
//        s1++;
//        s2++;
//      }
//      if (*s2 == '\0')
//      {
//        return p;
//      }
//      p++;
//  }
//  return NULL;
//}
//
//int main()
//{
//  char arr1[] = "adsdsadasd";
//  char arr2[] = "sds";
//  char* ret = my_strstr(arr1, arr2);
//  if (ret != NULL)
//    printf("%s\n", ret);
//  else
//    printf("ÕÒ²»µ½\n");
//
//  return 0;
//}



//char* my_strncpy(char* str2, const char* str1,size_t num)
//{
//
//  assert(str1 && str2);
//  char* ret = str2;
//  while (num--)
//  {
//    if (*str1 == '\0')
//    {
//      *str2 == '\0';
//    }
//    else
//    {
//      *str2++ = *str1++;
//    }
//  }
//  return ret;
//}
//
//int main()
//{
//  char arr1[20] = "abcdef";
//  char arr2[20] = "xxxx";
//  my_strncpy(arr2, arr1, 6);
//  printf("%s", arr2);
//}

//char* my_strncat(char* str2, const char* str1, size_t num)
//{
//  assert(str1 && str2);
//  char* ret = str2;
//  while (*str2 != '\0')
//  {
//    str2++;
//  }
//  while (num--)
//      {
//        if (*str1 == '\0')
//        {
//          *str2 == '\0';
//        }
//        else
//        {
//          *str2++ = *str1++;
//        }
//      }
//      return ret;
//}
//
//
//int main()
//{
//  char arr1[20] = "abcdef";
//  char arr2[20] = "xxxx";
//  my_strncat(arr2, arr1, 6);
//  printf("%s", arr2);
//}

#include <string.h>

void* my_memcpy(void* str2, const void* str1, size_t num)
{
  void* ret = str2;
  assert(str2 && str1);
 
  while (num--)
  {
    *(char*)str2 = *(char*)str1;
    str2 = (char*)str2 + 1;
    str1 = (char*)str1 + 1;
  }
  return(ret);
}

int main()
{
  int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
  int arr2[10] = { 0 };
  my_memcpy(arr2, arr1, 24);
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", arr2[i]);
  }
  return 0;
}
