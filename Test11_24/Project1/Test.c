#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main()
{
  SLNode* plist =NULL;
  SLTPushBack(&plist,1);
  SLTPushBack(&plist,2);
  SLTPushBack(&plist,3);
  SLTDestroy(&plist);

  return 0;
}
