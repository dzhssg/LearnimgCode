#include <math.h>
#include <stdio.h>
int main() {
	//��ӡ"0-100000֮���������(����ˮ�ɻ���)"
	int i = 0;
	for (i = 0; i < 100000; i++) {
		//1.����iһ���ж���λ-n
		int n = 1;
		int temp = i;
		while (temp / 10) {
			n++;
			temp = temp / 10;
		}
		//2.����i��ÿһλ��n�η�֮��
		temp = i;
		int sum = 0;
		while (temp) {
			sum += pow(temp % 10, n);
			temp = temp / 10;
		}

		//3.�ж��Ƿ���������
		if (sum == i) {
			printf("%d ", i);
		}

	}
	return 0;
}
