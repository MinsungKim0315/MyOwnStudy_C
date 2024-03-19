#include <stdio.h>

//배열명에 정수 연산을 수행하여 배열 요소 사용
// int main(){
//     int ary[3];
//     int i;

//     *(ary + 0) = 10; //ary[0] = 10
//     *(ary + 1) = *(ary + 0) + 10;   //ary[1] = ary[0] + 10 = 20

//     printf("insert third element: ");
//     scanf("%d", ary + 2);   //ary[2]

//     for(i = 0; i < 3;i++){
//         printf("%5d", *(ary + i));
//     }

//     return 0;
// }

//배열명처럼 사용되는 포인터
// int main(){
//     int ary[3];
//     int *pa = ary;
//     int i;

//     *pa = 10;
//     *(pa + 1) = 20; // pa[1] = 20; 도 가능
//     pa[2] = pa[0] + pa[1];  //대괄호 써서 pa를 배열명처럼 사용

//     for(i=0;i<3;i++){
//         printf("%4d", pa[i]);
//     }

//     return 0;
// }

//포인터를 이용한 배열의 값 출력
// int main(){
//     int ary[3] = {1, 2, 3};
//     int *pa = ary;
//     int i;

//     printf("array: ");
//     for(i=0;i<3;i++){
//         printf("%d ", *pa);     //printf("%d ", *(pa++))도 가능
//         pa++;
//     }
//     return 0;
// }

//포인터의 뺄셈
// int main(){
//     int ary[5] = {1, 2, 3, 4, 5};
//     int *pa = ary;
//     int *pb = pa + 3;

//     printf("pa: %u\n", pa);
//     printf("pb: %u\n", pb);
//     pa++;
//     printf("pb - pa = %u\n", pb - pa);  //포인터의 뺄셈은 배열 요소사이의 간격차이를 의미

//     return 0;
// }

//배열을 처리하는 함수
// void print_ary(int *pa);

// int main(){
//     int ary[5] = {1, 2, 3, 4, 5};

//     print_ary(ary);

//     return 0;
// }
// void print_ary(int *pa){
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d ", pa[i]);
//     }
// }

//크기간 다른 배열을 출력하는 함수
// void print_ary(int *pa, int size);

// int main(){
//     int ary1[5] = {1, 2, 3, 4, 5};
//     int ary2[7] = {1, 2, 3, 4, 5, 6, 7};

//     print_ary(ary1, sizeof(ary1)/sizeof(ary1[0]));  //C does not have a function like len()
// printf("\n");                                       //need to do sizeof(array)/sizeof(array[0]) to get length
//     print_ary(ary2, sizeof(ary2)/sizeof(ary2[0]));

//     return 0;

// }

// void print_ary(int *pa, int size){
//     int i;

//     for(i=0;i<size;i++){
//         printf("%d ", pa[i]);
//     }
// }

//배열에 값을 입력하는 함수
// void input_ary(double *pa, int size);
// double find_max(double *pa, int size);

// int main(){
//     double ary[5];
//     double max;
//     int size = sizeof(ary)/sizeof(ary[0]);

//     input_ary(ary, size);
//     max = find_max(ary, size);
//     printf("max value of array: %.1lf\n", max);

//     return 0;
// }
// void input_ary(double *pa, int size){
//     int i;

//     printf("insert %d variables for array: ", size);
//     for(i=0;i<size;i++){
//         scanf("%lf", &pa[i]);
//     }   
// }
// double find_max(double *pa, int size){
//     double max;
//     int i;
//     max = pa[0];

//     for(i=1;i<size;i++){
//         if(pa[i] > max) max = pa[i];
//     }
//     return max;
// }

//함수의 매개변수 자리에 배열을 선언하는 경우
// void print_ary(int pa[5]);

// int main(){
//     int ary[5] = {1, 2, 3, 4, 5};

//     print_ary(ary);

//     return 0;
// }
// void print_ary(int pa[5]){
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d ", pa[i]);
//     }
// }

//로또 번호 생성 프로그램
void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(){
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);

    return 0;
}
void input_nums(int *lotto_nums){
    int i, j;

    printf("insert 6 numbers: \n");

    for(i=0;i<6;i++){
        printf("%dth number: ", i + 1);
        scanf("%d", &lotto_nums[i]);
        for(j=0;j<i;j++){
            if(lotto_nums[i] == lotto_nums[j]){
                printf("Dublicated number detected. Enter a different number: \n");
                i--;
                break;
            }
        }
    }
}
void print_nums(int *lotto_nums){
    int i;

    for(i=0;i<6;i++){
        printf("%d ", lotto_nums[i]);
    }
}