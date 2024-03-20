#include <stdio.h>
#include <string.h>

//포인터로 문자열을 사용하는 법
// int main(){
//     char *dessert = "apple";

//     printf("today's dessert  is %s\n", dessert);
//     dessert = "banana";
//     printf("tommorow's dessert is %s", dessert);
// }

//scanf 함수를 사용한 문자열 입력
// int main(){
//     char str[80];

//     printf("type a string: ");
//     scanf("%s", str);
//     printf("first word: %s\n", str);
//     scanf("%s", str);
//     printf("the sencond word left in the buffer: %s\n", str);

//     return 0;
// }

//gets 함수를 사용한 문자열 입력
// int main(){
//     char str[80];

//     printf("type a string including space: ");
//     gets(str);
//     printf("string: %s", str);
// }

//fgets 함수의 문자열 입력 방법
// int main(){
//     char str[80];
//     printf("type a string including space: ");
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str)-1] = '\n';  //개행문자 제거하는 방법
//     printf("string: %s", str);

//     return 0;
// }

//개행 문자로 인해 gets 함수가 입력을 못하는 경우
// int main(){
//     int age;
//     char name[20];

//     printf("type age: ");
//     scanf("%d", &age);
//     //getchar(); 버퍼에서 하나의 문자를 읽어서 변환, 반환 문자는 버림 /*or*/ 
//     //scanf("%c"); 버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요없음/*or*/ 
//     //fgetc(stdin); 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
//     printf("type name: ");
//     gets(name);
//     printf("age: %d, name: %s", age, name);
// }

//문자열 출력하는 puts와 fputs 함수
// int main(){
//     char str[80] = "apple juice";
//     char *ps = "banana";

//     puts(str);  //문자열 출력하고 자동 줄 바꿈
//     fputs(ps, stdout);  //문자열 출력하고 줄 바꾸지 않음
//     puts("milk");

//     return 0;
// }

//strcpy 함수의 사용법
// int main(){
//     char str1[80] = "strawberry";
//     char str2[80] = "apple";
//     char *ps1 = "banana";
//     char *ps2 = str2;

//     printf("original string: %s\n", str1);
//     strcpy(str1, str2);
//     printf("modified string: %s\n", str1);

//     strcpy(str1, ps1);
//     printf("modified string: %s\n", str1);

//     strcpy(str1, ps2);
//     printf("modified string: %s\n", str1);

//     strcpy(str1, "banana");
//     printf("modified string: %s\n", str1);

//     return 0;
// }

//strncpy 함수를 사용한 문자열 복사
// int main(){
//     char str[20] = "mango tree";

//     strncpy(str, "apple-pie", 5);

//     printf("%s", str);

//     return 0;
// }

//strcat, strncat 함수를 사용한 문자열 붙이기
// int main(){
//     char str[80] = "straw";

//     strcat(str, "berry");
//     printf("%s\n", str);
//     strncat(str, "piece", 3);
//     printf("%s\n", str);

//     return 0;
// }

//strlen 함수를 이용해 두 문자열 중 길이가 긴 단어 출력
// int main(){
//     char str1[80], str2[80];
//     char *resp;

//     printf("type two fruits: ");
//     scanf("%s%s", str1, str2);
//     if(strlen(str1) > strlen(str2)){
//         resp = str1;
//     }else{
//         resp = str2;
//     }

//     printf("longest name of fruit: %s", resp);
// }

//strcmp, strncmp 함수를 사용한 문자열 비교
// int main(){
//     char str1[80] = "pear";
//     char str2[80] = "peach";

//     printf("word that is alphabetically late: ");
//     if(strcmp(str1, str2)>0)
//         printf("%s\n", str1);
//     else
//         printf("%s\n", str2);

//     printf("copare only the first three letters: ");
//     if(strncmp(str1, str2, 3) == 0)
//         printf("same");
//     else
//         printf("different");

//     return 0;
// }

//단어의 길이가 5자를 넘어가는 경우 6자부터 * 출력
// int main(){
//     char ch[80];
//     char str[80] = "";
//     int i;

//     printf("input a word: ");
//     gets(ch);

//     if (strlen(ch) > 5){
//         strncpy(str, ch, 5);
//         for(i=0;i<strlen(ch) - 5;i++)
//             strcat(str, "*");
//         printf("%s", str);
//     }else
//         printf("%s", ch);

//     return 0;
// }

//세 단어를 입력하면 사전순서대로 출력
void swap(char *str1, char *str2);
int main(){
    char str1[80], str2[80], str3[80];

    printf("insert three different words: ");
    scanf("%s%s%s", str1, str2, str3);

    if(strcmp(str1, str2)>0)
        swap(str1, str2);
    if(strcmp(str2, str3)>0)
        swap(str2, str3);
    if(strcmp(str1, str2)>0)
        swap(str1, str2);
    printf("In alphabetic order: %s, %s, %s", str1, str2, str3);

    return 0;
}
void swap(char *str1, char *str2){
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}