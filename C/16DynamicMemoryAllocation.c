#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(){
//     int *pi;
//     double *pd;

//     pi = (int *)malloc(sizeof(int));
//     if(pi == NULL){
//         printf("#Not enough memory.\n");
//         exit(1);
//     }
//     pd = (double *)malloc(sizeof(double));

//     *pi = 10;
//     *pd = 3.4;

//     printf("In integer: %d\n", *pi);
//     printf("In float: %.1lf\n", *pd);

//     free(pi);
//     free(pd);

//     return 0;
// }

//Using Memory Allocation like an Array
// int main(){
//     int *pi;
//     int i, sum = 0;

//     pi = (int *)malloc(5 * sizeof(int));
//     if(pi == NULL){
//         printf("Not enough memory\n");
//         exit(1);
//     }
//     printf("insert the ages of 5 people: ");
//     for(i=0;i<5;i++){
//         scanf("%d", &pi[i]);
//         sum += pi[i];
//     }
//     printf("the average age of 5 people: %.1lf\n", (sum / 5.0));
//     free(pi);
    
//     return 0;
// }

// int main(){
//     int *pi;
//     int size = 5;
//     int count = 0;
//     int num, i;

//     pi = (int *)calloc(size, sizeof(int));  //allocate memory of size 5
//     while(1){
//         printf("type a positive number: ");
//         scanf("%d", &num);
//         if(num <= 0) break;
//         if(count == size){  //if all memory spaces are used
//             size += 5;
//             pi = (int *)realloc(pi, size * sizeof(int));    //increase the memory size
//         }
//         pi[count++] = num;
//     }
//     for(i=0;i<count;i++){
//         printf("%5d", pi[i]);
//     }
//     free(pi);

//     return 0;
    
// }

//allocate memory that fits the string size
// int main(){
//     char temp[80];
//     char *str[3];
//     int i;

//     for(i=0;i<3;i++){
//         printf("insert a string: ");
//         gets(temp);
//         str[i] = (char *)malloc(strlen(temp) + 1);
//         strcpy(str[i], temp);
//     }
//     for(i=0;i<3;i++){
//         printf("%s\n", str[i]);
//     }
//     for(i=0;i<3;i++){
//         free(str[i]);
//     }
//     return 0;
// }

//동적 할당 영역의 문자열을 함수로 출력
// void print_str(char **ps);
// int main(){
//     char temp[80];
//     char *str[21] = { 0 };
//     int i = 0;

//     while(i < 20){
//         printf("type a string: ");
//         gets(temp);
//         if(strcmp(temp, "end") == 0) break;
//         str[i] = (char *)malloc(strlen(temp) + 1);
//         strcpy(str[i], temp);
//         i++;
//     }
//     print_str(str);
//     for(i=0;str[i] != NULL;i++){
//         free(str[i]);
//     }
//     return 0;
// }

// void print_str(char **ps){
//     while(*ps != NULL){
//         printf("%s\n", *ps);
//         ps++;
//     }
// }

//명령행 인수를 출력
// int main(int argc, char **argv){
//     int i;

//     for(i=0;i<argc;i++){
//         printf("%s\n", argv[i]);
//     }
//     return 0;
// }

//Prime Number
int main(){
    int i, j;
    int num;
    int count_prime = 0;
    char ch = 'X';

    printf("insert num: ");
    scanf("%d", &num);

    char *primes = (char *)malloc(sizeof(char) * num);
    if (primes == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i=2;i<num+1;i++){
        int count = 0;
        for(j=1;j<=i;j++){
            if (i % j == 0) count++;
        }
        if(count == 2){primes[count_prime++] = i;}
        else{primes[count_prime++] = ch;}
    }

    for (int i = 0; i < count_prime; i++) {
        if (primes[i] == ch) {
            printf("%5c ", primes[i]); // Print 'X' for non-prime numbers
        } else {
            printf("%5d ", primes[i]); // Print prime numbers
        }
        if((i+1)%5 == 0){
            printf("\n");
        }
    }

    // Free dynamically allocated memory
    free(primes);

    return 0;
}
