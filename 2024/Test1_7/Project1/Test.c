 #define _CRT_SECURE_NO_WARNINGS 1
 #include"Heap.h"
int main()
{
    // 初始化一个整数数组
    int a[] = { 4, 6, 2, 1, 5, 8, 2, 9 };
    Hp hp;// 创建一个堆结构的实例
    HeapInit(&hp);// 初始化堆

    // 遍历数组，将数组中的每个元素插入堆中
    for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
    {
        HeapPush(&hp, a[i]);
    }

    while (!HeapEmpty(&hp)) // 当堆不为空时，循环继续
    {
        printf("%d ", HeapTop(&hp));// 打印堆顶元素
        HeapPop(&hp); // 弹出堆顶元素
    }
    printf("\n"); // 打印换行符

    return 0;
}
