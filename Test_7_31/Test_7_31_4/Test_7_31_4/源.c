#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//����������ԣ����½����������������ݣ�ԭ����ͬ
int main() 
{
    int* arr1;
    int* arr2;
    int m = 0, n = 0;//����
    int i = 0;
    int f1 = 0, f2 = 0;//����
    scanf("%d %d", &m, &n);
    arr1 = (int*)malloc(sizeof(int) * (m + 1));//����n�Ĵ�С���涨����Ĵ�С
    arr2 = (int*)malloc(sizeof(int) * (n + 1));
    for (i = 0; i < m; i++) {//��������
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++) {//��������
        scanf("%d", &arr2[i]);
    }
    i = 0;
    while (i < (m + n)) {
        if (f1 == m) {//��һ�����������ᣬ�ڶ�����δ��ʱ
            //������Բ���"&&��f2<n)",���жϵ�f1==mʱ��f2��Ȼ��С�ڵ���n�ģ�
            //������i���Ƶģ�i���n+m�;������������ᳬ�����������ӡ����Խ��
            printf("%d ", arr2[f2++]);//���Ŵ�ӡ�ڶ�������ʣ����
        }
        else if (f2 == n) {//ͬ��
            printf("%d ", arr1[f1++]);
        }
        else if (arr1[f1] >= arr2[f2]) {//��ӡС��������ͬ��
            printf("%d ", arr2[f2++]);
        }
        else if (arr1[f1] <= arr2[f2]) {
            printf("%d ", arr1[f1++]);
        }
        i++;
    }
    return 0;
}