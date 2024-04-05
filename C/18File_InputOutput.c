#include <stdio.h>
#include <string.h>
//C:\\Users\\minsung.kim\\.vscode\\C\\a.text
//C:\\Users\\minsung.kim\\Desktop\\test.text

//open and close file
// int main(){
//     FILE *fp;

//     fp = fopen("C:\\Users\\minsung.kim\\Desktop\\test.text", "w");
//     if(fp == NULL){
//         printf("file does not open\n");
//         return 1;
//     }
//     printf("file open\n");
//     fclose(fp);

//     return 0;
// }

//char input: fgetc
// int main(){
//     FILE *fp;
//     int ch;
//     fp = fopen("C:\\Users\\minsung.kim\\.vscode\\C\\a.text", "r");
//     if(fp == NULL){
//         printf("file does not open\n");
//         return 1;
//     }
//     while(1){
//         ch = fgetc(fp);
//         if(ch == EOF){
//             break;
//         }
//         putchar(ch);
//     }

//     fclose(fp);

//     return 0;
// }

//char output: fputc
// int main(){
//     FILE *fp;
//     char str[] = "Banana";
//     int i;

//     fp = fopen("C:\\Users\\minsung.kim\\.vscode\\C\\b.text", "w");
//     if(fp == NULL){
//         printf("file does not open\n");
//         return 1;
//     }

//     i = 0;
//     while(str[i] != '\0'){
//         fputc(str[i], fp);
//         i++;
//     }
//     fputc('\n', fp);
//     fclose(fp);

//     return 0;
// }

//Standard input/output streams
// int main(){
//     int ch;

//     while(1){
//         ch = getchar();
//         if(ch == EOF){
//             break;
//         }
//         putchar(ch);
//     }

//     return 0;
// }

//stdin and stdout
// int main(){
//     int ch;

//     while(1){
//         ch = fgetc(stdin);
//         if(ch == EOF){
//             break;
//         }
//         fputc(ch, stdout);
//     }
//     return 0;
// }

//파일의 형태와 개방 모드가 다른 경우
// int main(){
//     FILE *fp;
//     int ary[10] = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10}; //13 = \r, 10 = \n
//     int i, res;

//     fp = fopen("a.text", "wb");
//     for(i=0;i<10;i++){
//         fputc(ary[i], fp);
//     }
//     fclose(fp);

//     fp = fopen("a.text", "rt");
//     while(1){
//         res = fgetc(fp);
//         if(res==EOF) break;
//         printf("%4d", res);
//     }
//     fclose(fp);

//     return 0;
// }

//a+ 모드로 파일의 내용을 확인하고 출력
// int main(){
//     FILE *fp;
//     char str[20];

//     fp = fopen("a.text", "a+");
//     if(fp == NULL){
//         printf("cannot make file\n");
//         return 1;
//     }

//     while(1){
//         printf("fruit name: ");
//         scanf("%s", str);
//         if (strcmp(str, "end") == 0){   //compare str and 'end'.
//             break;
//         }
//         else if(strcmp(str, "list") == 0){
//             fseek(fp, 0, SEEK_SET); //set the buffer to 0 in order to read from the beginning
//             while(1){
//                 fgets(str, sizeof(str), fp);    ///read the fruit names
//                 if(feof(fp)){   //check if the processing of reading the stream file is done or not
//                     break;
//                 }
//                 printf("%s", str);
//             }
//         }
//         else{
//             fprintf(fp, "%s\n", str);   //print the fruits in a.text
//         }
//     }
//     fclose(fp);
//     return 0;
// }

//여러 줄의 문장을 입력하여 한 줄 출력
// int main(){
//     FILE *ifp, *ofp;
//     char str[80];
//     char *res;

//     ifp = fopen("a.text", "r");
//     if(ifp == NULL){
//         printf("file error");
//         return 1;
//     }

//     ofp = fopen("b.text", "w");
//     if(ofp == NULL){
//         printf("file error");
//         return 1;
//     }

//     while(1){
//         res = fgets(str, sizeof(str), ifp);
//         if(res == NULL){
//             break;
//         }
//         str[strlen(str) - 1] = '\0';
//         fputs(str, ofp);
//         fputs(" ", ofp);
//     }
//     fclose(ifp);
//     fclose(ofp);

//     return 0;
// }

//다양한 자료형을 형식에 맞게 입출력
// int main(){
//     FILE *ifp, *ofp;
//     char name[20];
//     int kor, eng, math;
//     int total;
//     double avg;
//     int res;

//     ifp = fopen("a.text", "r");
//     if(ifp == NULL){
//         printf("file error");
//         return 1;
//     }

//     ofp = fopen("b.text", "w");
//     if(ofp == NULL){
//         printf("file error");
//         return 1;
//     }

//     while(1){
//         res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
//         if(res == EOF){
//             break;
//         }
//         total = kor + eng + math;
//         avg = total / 3.0;
//         fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
//     }
//     fclose(ifp);
//     fclose(ofp);

//     return 0;
// }

//버퍼 공유로 발생하는 문제
// int main(){
//     FILE *fp;
//     int age;
//     char name[20];

//     fp = fopen("a.text", "r");

//     fscanf(fp, "%d", &age);
//     //fscanf(fp, "%s", name);
//     fgets(name, sizeof(name), fp);

//     printf("age: %d, name: %s", age, name);
//     fclose(fp);

//     return 0;
// }

//fprintf와 fwrite 차이
// int main(){
//     FILE *afp, *bfp;
//     int num = 10;
//     int res;

//     afp = fopen("a.text", "wt");
//     fprintf(afp, "%d", num);

//     bfp = fopen("b.text", "wb");
//     fwrite(&num, sizeof(num), 1, bfp);

//     fclose(afp);
//     fclose(bfp);

//     bfp = fopen("b.txt", "rb");
//     fread(&res, sizeof(res), 1, bfp);
//     printf("%d", res);

//     fclose(bfp);

//     return 0;
// }

//단어 검출 프로그램(b.txt에 입력해서 a.txt에 없는것을 c.txt 생성해서 출력)
/*read a.txt, write on b.txt, create c.txt and write on it*/
#define MAX_WORDS 1000
int main(){
    FILE *afp, *bfp, *cfp;
    char str[10];
    char wordsInFirstFile[MAX_WORDS][101]; // Using 101 as a fixed size for simplicity
    int totalWordsInFirstFile = 0;
    int count = 0;

    afp = fopen("a.text", "r");
    if(afp == NULL){
        printf("File does not exist");
        return 1;
    }

    bfp = fopen("b.text", "w+");
    if(bfp == NULL){
        printf("cannot make file\n");
        return 1;
    }
    cfp = fopen("c.text", "w+");
    if(cfp == NULL){
        printf("file error");
        return 1;
    }

    //b.text에 단어 입력
    while(count < 10){
        printf("words that are below 10 words: ");
        scanf("%s", str);
        fprintf(bfp, "%s\n", str);
        count++;
    }

    rewind(bfp);    //Reset file pointer to the beginning of b.text to read from it

    //a.text와 b.text 비교
    while (fgets(str, sizeof(str), afp) && totalWordsInFirstFile < MAX_WORDS) {
        str[strcspn(str, "\n")] = 0; // Remove newline character
        strcpy(wordsInFirstFile[totalWordsInFirstFile++], str);
    }
    while (fgets(str, sizeof(str), bfp)) {
        int found = 0; // Reset found for each word
        str[strcspn(str, "\n")] = 0; // Remove newline character
        for (int i = 0; i < totalWordsInFirstFile; i++) {
            if (strcmp(str, wordsInFirstFile[i]) == 0) {
                found = 1; // Set found if the word is in the first file
                break;
            }
        }
        //겹치지 않는 단어 c.text에 print
        if (!found) {
            fprintf(cfp, "%s\n", str);
        }
    }

    fclose(afp);
    fclose(bfp);
    fclose(cfp);

    return 0;
}
