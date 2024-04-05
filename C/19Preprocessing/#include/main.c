//사용자 정의 헤더 파일을 사용하는 프로그램
#include <stdio.h>
#include "student.h"

int main(){
    Student a = {315, "Minsung Kim"};
    printf("Student ID: %d, name: %s", a.num, a.name);\

    return 0;
}