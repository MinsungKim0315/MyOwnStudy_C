#include<stdio.h>

int main() {

	int i, j, k;
	int count[10] = { 0 };
	int freq[20];

	printf("성적을 입력:");

	for (i = 0; i< 20; i++)
		scanf_s("%d", &freq[i]);

	for (k = 0; k < 20; k++) {
		if (freq[k] / 10 == 10)
			count[9]++;
		else
			count[freq[k] / 10]++;
	}

	for (j = 0; j < 9; j++)
		printf("%2d ~ %3d 점: %2d 명 \n", 10 * j, 10 * j + 9, count[j]);
	printf("90 ~ 100점: %2d 명 \n", count[9]);

	return 0;
}