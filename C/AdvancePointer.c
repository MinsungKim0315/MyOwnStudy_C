#include<stdio.h>

//포인터와 이중 포인터의 관계
int main(){
    int a = 10;
    int *pi;
    int **ppi;

    pi = &a;
    ppi = &pi;

    printf("-------------------------------------------------------\n");
    printf("변수   변수값    &연산     *연산      **연산\n");
    printf("-------------------------------------------------------\n");
    printf("  a%10d%10u\n", a, &a);
    printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
    printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
    printf("-------------------------------------------------------\n");

    return 0;
}

//이중 포인터를 사용한 포인터 교환
void swap_ptr(char **ppa, char **ppb);

int main(){
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}
void swap_ptr(char **ppa, char **ppb){
    char *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}

//포인터 배열의 값을 출력하는 함수
void print_str(char **pps, int cnt);
int main(){
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    return 0;
}

void print_str(char **pps, int cnt){
    int i;

    for(i=0;i<cnt;i++){
        printf("%s\n", pps[i]);
    }
}

//배열 포인터로 2차원 배열의 값 출력
int main(){
    int ary[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int (*pa)[4];
    int i, j;

    pa = ary;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}

/*Pointer Array V.S. Array Pointer
##Pointer Array
An array  that contains pointers as its elements
ex) int *ptrarray[5] represents an array of length 5, where each element is a pointer to an int

##Array Pointer
A pointer that points to an array
specifically points to the first element of a particular array
ex) int (*arrptr)[5] represents a pointer that points to an array of 5 int elements
*/

//2차원 배열의 값을 출력하는 함수
void print_ary(int (*pa)[4]);

int main(){
    int ary[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    print_ary(ary);

    return 0;
}
void print_ary(int (*pa)[4]){
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}

//함수 포인터를 사용한 함수 호출
int sum(int, int);

int main(){
    int (*fp)(int, int);
    int res;

    fp = sum;
    res = fp(10, 20);
    printf("result: %d\n", res);
    
    return 0;
}
int sum(int a, int b){
    return (a + b);
}

//함수 포인터로 원하는 함수를 호출하는 프로그램
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(){
    int sel;

    printf("01 sum of two integers\n");
    printf("02 multiplication of two integers\n");
    printf("03 max value between two integers\n");
    printf("choose between 1 to 3: ");
    scanf("%d", &sel);

    switch (sel){
        case 1: func(sum); break;
        case 2: func(mul); break;
        case 3: func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int)){
    int a, b;
    int res;

    printf("insert two integers");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("result: %d\n", res);
}
int sum(int a, int b){
    return (a + b);
}
int mul(int a, int b){
    return (a * b);
}
int max(int a, int b){
    if(a > b) return a;
    else return b;
}

//void pointer
int main(){
    int a = 10;
    double b = 3.5;
    void *vp;

    vp = &a;
    printf("a: %d\n", *(int *)vp);

    vp = &b;
    printf("b: %.1lf\n", *(double *)vp);

    return 0;
}
