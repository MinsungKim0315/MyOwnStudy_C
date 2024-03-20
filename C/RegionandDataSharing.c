#include <stdio.h>
#include <sys/time.h>

//swaping two vars using a local variable in a block
int main(){
    int a = 10, b = 20;

    printf("a and b before swap: %d, %d\n", a, b);
    {
        int temp;

        temp = a;
        a = b;
        b = temp;
    }
    printf("a and b after swap: %d, %d\n", a, b);
    return 0;
}

//global variable
void assign10(void);
void assign20(void);

int a;  //define local variable

int main(){
    printf("a before calling function: %d\n", a);

    assign10();
    assign20();

    printf("a after calling function: %d", a);

    return 0;
}

void assign10(){
    a = 10;
}
void assign20(){
    int a;
    a = 20;
}

//auto local var V.S. static local var
void auto_func(void);
void static_func(void);

int main(){
    int i;

    printf("fuction using auto local var...\n");
    for(i=0;i<3;i++){
        auto_func();
    }

    printf("funciton using static local var...\n");
    for(i=0;i<3;i++){
        static_func();
    }

    return 0;
}

void auto_func(){
    auto int a = 0;

    a++;
    printf("%d\n", a);
}

void static_func(){
    static int a;

    a++;
    printf("%d\n", a);
}

//register variable
int main(){
    register int i;
    auto long int sum = 0;
    struct timeval start_time, end_time;
    long long elapsed_time;


    gettimeofday(&start_time, NULL);
    for(i=0;i<1000000;i++)
        sum += i;
    
    printf("%d\n", sum);
    gettimeofday(&end_time, NULL);
    elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);

    printf("Elapsed time: %lld microseconds\n", elapsed_time);
    return 0;
}

//값을 복사해서 10을 더하는 방법
int add_ten(int a);

int main(){
    int a = 10;

    a = add_ten(a);
    printf("%d", a);

    return 0;
}
int add_ten(int a){
    a = a + 10;
    return a;
}

//포인터를 써서 10을 더하는 방법
void add_ten(int *pa);

int main(){
    int a = 10;
    
    add_ten(&a);
    printf("a: %d", a);

    return 0;
}
void add_ten(int *pa){
    *pa += 10;
}

//주소를 반환하여 두 정수의 합 구하기
int *sum(int a, int b);
int main(){
    int *resp;

    resp = sum(10, 20);
    printf("sum of two nums: %d\n", *resp);

    return 0;
}

int *sum(int a, int b){
    static int res;

    res = a + b;

    return &res;
}

//전역 변수 교환 프로그램
void input_data(int *pa, int *pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(){
    input_data(&a, &b);
    swap_data();
    print_data(a, b);

    return 0;
}
void input_data(int *pa, int *pb){
    printf("type two nums: ");
    scanf("%d%d", pa, pb);
}
void swap_data(void){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void print_data(int a, int b){
    printf("swaped two nums: %d, %d", a, b);
}
