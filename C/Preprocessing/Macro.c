#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "Passed!"
#define ERR_PRN printf("Ouf of limit!\n")

int main(){
    double radius, area;

    printf("input radius(below 10): ");
    scanf("%lf", &radius);
    area = radius * radius * PI;
    if(area > LIMIT) ERR_PRN;
    else printf("Area of circle: %.2lf (%s)", area, MSG);
}