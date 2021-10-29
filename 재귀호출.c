#include<stdio.h>
//재귀호출 이용한 1부터 num까지의 합 구하기
int recursive_sum(int num);

int main() {
	int num;
	int result;

	printf("number: ");
	scanf("%d", &num);

	result = recursive_sum(num);

	printf("sum = %d", result);

	return 0;
}

int recursive_sum(int num) {
	if (num == 0) {
		return 0;
	}
	return num + recursive_sum(num - 1);
}