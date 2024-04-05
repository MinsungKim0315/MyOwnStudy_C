#include <stdio.h>
#pragma pack(push, 1)   //change the byte allignment to 1
typedef struct
{
    char ch;
    int in;
} Sample1;

#pragma pack(pop)   //use the former allignment
typedef struct{
    char ch;
    int in;
} Sample2;

int main(){
    printf("Sample1 structure size: %d bytle\n", sizeof(Sample1));
    printf("Sample2 structure size: %d bytle\n", sizeof(Sample2));

    return 0;
}