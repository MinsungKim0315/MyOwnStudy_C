#include <stdio.h>
#include <string.h>

//�����ͷ� ���ڿ��� ����ϴ� ��
// int main(){
//     char *dessert = "apple";

//     printf("today's dessert  is %s\n", dessert);
//     dessert = "banana";
//     printf("tommorow's dessert is %s", dessert);
// }

//scanf �Լ��� ����� ���ڿ� �Է�
// int main(){
//     char str[80];

//     printf("type a string: ");
//     scanf("%s", str);
//     printf("first word: %s\n", str);
//     scanf("%s", str);
//     printf("the sencond word left in the buffer: %s\n", str);

//     return 0;
// }

//gets �Լ��� ����� ���ڿ� �Է�
// int main(){
//     char str[80];

//     printf("type a string including space: ");
//     gets(str);
//     printf("string: %s", str);
// }

//fgets �Լ��� ���ڿ� �Է� ���
// int main(){
//     char str[80];
//     printf("type a string including space: ");
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str)-1] = '\n';  //���๮�� �����ϴ� ���
//     printf("string: %s", str);

//     return 0;
// }

//���� ���ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���
// int main(){
//     int age;
//     char name[20];

//     printf("type age: ");
//     scanf("%d", &age);
//     //getchar(); ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ���� /*or*/ 
//     //scanf("%c"); ���ۿ��� �ϳ��� ���ڸ� �о ����, ������ �ʿ����/*or*/ 
//     //fgetc(stdin); ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����
//     printf("type name: ");
//     gets(name);
//     printf("age: %d, name: %s", age, name);
// }

//���ڿ� ����ϴ� puts�� fputs �Լ�
// int main(){
//     char str[80] = "apple juice";
//     char *ps = "banana";

//     puts(str);  //���ڿ� ����ϰ� �ڵ� �� �ٲ�
//     fputs(ps, stdout);  //���ڿ� ����ϰ� �� �ٲ��� ����
//     puts("milk");

//     return 0;
// }

//strcpy �Լ��� ����
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

//strncpy �Լ��� ����� ���ڿ� ����
// int main(){
//     char str[20] = "mango tree";

//     strncpy(str, "apple-pie", 5);

//     printf("%s", str);

//     return 0;
// }

//strcat, strncat �Լ��� ����� ���ڿ� ���̱�
// int main(){
//     char str[80] = "straw";

//     strcat(str, "berry");
//     printf("%s\n", str);
//     strncat(str, "piece", 3);
//     printf("%s\n", str);

//     return 0;
// }

//strlen �Լ��� �̿��� �� ���ڿ� �� ���̰� �� �ܾ� ���
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

//strcmp, strncmp �Լ��� ����� ���ڿ� ��
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

//�ܾ��� ���̰� 5�ڸ� �Ѿ�� ��� 6�ں��� * ���
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

//�� �ܾ �Է��ϸ� ����������� ���
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