
#include<stdio.h>

int main() {

	int a, b, c, d, e;
	
	printf("오늘의 날짜와 시간을 입력하시오: ");

	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("%d년 %d월 %d일 %d시 %d분", a, b, c, d, e);


	return 0;
}