
#include<stdio.h>
#include<math.h>

int main() {

	double a, b, c, d, x;
	double p, q, y;

	printf("a, b, c, d, p, q에 들어갈 값을 차례대로 입력하시오: ");
	scanf_s("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &p, &q);

	x = sqrt((a - c) * (a - c) + (b - d)*(b - d));
	y = floor(p) + ceil(q - 1);

	printf("x=%f, y=%f\n", x, y);


	return 0;
}