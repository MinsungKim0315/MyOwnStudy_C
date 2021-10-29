#include<stdio.h>

double BMI(double height, double weight);

int main() {

	double H, w, bmi;
	double h = 0;

	printf("몸무게를 입력하시오: ");
	scanf_s("%lf", &w);

	printf("키를 입력하시오: ");
	scanf_s("%lf", &H);
	h = H / 100;

	bmi = BMI(h, w);

	printf("당신의 BMI는 %lf입니다", &bmi);

	return 0;

}

double BMI(double height, double weight){
	return weight / (height * height);
}