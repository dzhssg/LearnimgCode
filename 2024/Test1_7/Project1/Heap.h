#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

// 堆的数据类型定义
typedef int HPDataType;

// 堆的结构体定义
typedef struct Heap
{
  HPDataType* a;  // 指向堆数组的指针
  size_t size;    // 堆当前的大小
  int capacity;   // 堆的最大容量
} Hp;

// 函数声明部分
void HeapInit(Hp* hp);  // 初始化堆

void HeapDestroy(Hp* hp);  // 销毁堆

void HeapPush(Hp* hp, HPDataType x);  // 向堆中插入元素

void HeapPop(Hp* hp);  // 从堆中弹出元素

HPDataType HeapTop(Hp* hp);  // 获取堆顶元素

size_t HeapSize(Hp* hp);  // 获取堆的大小

bool HeapEmpty(Hp* hp);  // 判断堆是否为空


