#include<stdio.h>	//¹Ì¿Ï¼º

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main() {

	double max, mid, min;

	printf("insert three rational numbers: ");
	scanf("&lf &lf &lf", &max, &mid, &min);
	line_up(&max, &mid, &min);

	printf("fixed number: %.1lf, %.1lf, %.1lf", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) {

	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}

void line_up(double* maxp, double* midp, double* minp) {

	if (*maxp < *midp) {
		swap(&maxp, &midp);
	}
	else {
		swap(&maxp, &midp);
		swap(&maxp, &midp);
	}
	if (*maxp < *minp) {
		swap(&maxp, &minp);
	}
	else {
		swap(&maxp, &minp);
		swap(&maxp, &minp);
	}
	if (*minp < *minp) {
		swap(&minp, &minp);
	}
	else {
		swap(&minp, &minp);
		swap(&minp, &minp);
	}
}