 #define _CRT_SECURE_NO_WARNINGS 1
 #include"Heap.h"
int main()
{
    // ��ʼ��һ����������
    int a[] = { 4, 6, 2, 1, 5, 8, 2, 9 };
    Hp hp;// ����һ���ѽṹ��ʵ��
    HeapInit(&hp);// ��ʼ����

    // �������飬�������е�ÿ��Ԫ�ز������
    for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
    {
        HeapPush(&hp, a[i]);
    }

    while (!HeapEmpty(&hp)) // ���Ѳ�Ϊ��ʱ��ѭ������
    {
        printf("%d ", HeapTop(&hp));// ��ӡ�Ѷ�Ԫ��
        HeapPop(&hp); // �����Ѷ�Ԫ��
    }
    printf("\n"); // ��ӡ���з�

    return 0;
}
