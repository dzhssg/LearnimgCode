#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// ѡ������
void SelectSort(int* a, int n);

// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);


// ð������
void BubbleSort(int* a, int n);

// ��������ݹ�ʵ��
// 
// ��������hoare�汾
int PartSort1(int* a, int left, int right);
void QuickSort1(int* a, int left, int right);

// ���������ڿӷ�
int PartSort2(int* a, int left, int right);
void QuickSort2(int* a, int left, int right);

// ��������ǰ��ָ�뷨
int PartSort3(int* a, int left, int right);
void QuickSort3(int* a, int left, int right);

// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right);

void PrintfArray(int* a, int n);
