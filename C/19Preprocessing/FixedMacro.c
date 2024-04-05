#include <stdio.h>

void func(void);

int main(){
    printf("date and time of compile: %s, %s\n\n", __DATE__, __TIME__);
    printf("file name: %s\n", __FILE__);
    printf("funcion name: %s\n", __FUNCTION__);
    printf("line number: %d\n", __LINE__);

#line 100 "macro.c" //set line number to 100 and change file name to "macro.c"
    func();
    return 0;
}

void func(){
    printf("\n");
    printf("file name: %s\n", __FILE__);
    printf("funcion name: %s\n", __FUNCTION__);
    printf("line number: %d\n", __LINE__);
}   