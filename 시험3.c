#include<stdio.h>

double BMI(double height, double weight);

int main() {

	double H, w, bmi;
	double h = 0;

	printf("�����Ը� �Է��Ͻÿ�: ");
	scanf_s("%lf", &w);

	printf("Ű�� �Է��Ͻÿ�: ");
	scanf_s("%lf", &H);
	h = H / 100;

	bmi = BMI(h, w);

	printf("����� BMI�� %lf�Դϴ�", &bmi);

	return 0;

}

double BMI(double height, double weight){
	return weight / (height * height);
}