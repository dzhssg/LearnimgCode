#include <math.h>
#include <stdio.h>
int main() {
	//打印"0-100000之间的自幂数(包括水仙花数)"
	int i = 0;
	for (i = 0; i < 100000; i++) {
		//1.计算i一共有多少位-n
		int n = 1;
		int temp = i;
		while (temp / 10) {
			n++;
			temp = temp / 10;
		}
		//2.计算i的每一位的n次方之和
		temp = i;
		int sum = 0;
		while (temp) {
			sum += pow(temp % 10, n);
			temp = temp / 10;
		}

		//3.判断是否和自身相等
		if (sum == i) {
			printf("%d ", i);
		}

	}
	return 0;
}
