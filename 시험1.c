#include<stdio.h>

int main() {

	int i, sum = 0;
	float avg;

	for (i = 0; i <= 100; i++)
		sum += i;

	avg = sum / 100.0f;

	printf("1부터 100까지의 합 = %d\n", sum);
	printf("1qnxj 100까지의 평균 = %f\n", avg);

	return 0;

}