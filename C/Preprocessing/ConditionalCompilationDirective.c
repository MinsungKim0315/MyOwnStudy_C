//조건부 컴파일 지시자
#include <stdio.h>
#define VER 7
#define BIT16

int main(){
    int max;
#if VER >= 6
    printf("version is %d\n", VER);
#endif
#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif

    printf("max value of int: %d\n", max);

    return 0;
}