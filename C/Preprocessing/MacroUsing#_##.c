#include <stdio.h>
#define PRINT_EXPTR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x ## y)

int main(){
    int a1, a2;

    NAME_CAT(a, 1) = 10;
    NAME_CAT(a, 2) = 20;
    PRINT_EXPTR(a1 + a2);
    PRINT_EXPTR(a2 - a1);

    return 0;
}