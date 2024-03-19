#include <stdio.h>

//대문자를 소문자로 변경
// int main(){
//     char small, cap = 'G';

//     if((cap >= 'A') && (cap <= 'Z')){
//         small = cap + ('a' - 'A');
//     }
//     printf("Capital: %c %c", cap, '\n');
//     printf("small: %c\n", small);
//     printf("%d", 'a' - 'A');
// }

//getchar and putchar function
// int main(){
//     int ch;

//     ch = getchar();
//     printf("typed char: ");
//     putchar(ch);

//     return 0;
// }

//Buffer
// int main(){
//     char ch;
//     int i;

//     for(i=0;i<3;i++){
//         scanf("%c", &ch);
//         printf("%c", ch);
//     }
//     return 0;
// }
// int main(){
//     char ch;
//     while(1){
//         scanf("%c", &ch);
//         if(ch == '\n') break;
//         printf("%c", ch);
//     }
// }

//scanf 함수 반환값 활용
// int main(){
//     int res;
//     char ch;

//     while(1){
//         res = scanf("%c", &ch);
//         if (res == EOF) break;  //<ctrl> + <z>누르면 EOF는 -1로 변환 --> 입력 끝
//         printf("%d ", ch);
//     }
//     return 0;
// }

//Erase elements in Buffer
//
// int main(){
//     int num, grade;

//     printf("Student ID: ");
//     scanf("%d", &num);
//     getchar();  //erase the 'newline character' remaining in the buffer
//     printf("Student grade: ");
//     scanf("%c", &grade);
//     printf("Student ID: %d, grade: %c", num, grade);
// }
// int main(){
//     int num, grade;

//     printf("Student ID: ");
//     scanf("%d", &num);

//     printf("Student grade: ");
//     scanf("%c", &grade);

//     printf("Student ID: %d, grade: %c", num, grade);
// }

//Find the length of the longest word
int main() {
    char ch;
    int currentLength = 0;
    int maxLength = 0;

    printf("Enter words (press Ctrl+D on Unix/Linux or Ctrl+Z on Windows to finish):\n");

    // Read characters until EOF (End of File) is encountered
    while ((ch = getchar()) != EOF) {
        // Check if the character is a space or newline
        if (ch == ' ' || ch == '\n') {
            // Check if the current word is longer than the longest word encountered so far
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            // Reset the length of the current word for the next word
            currentLength = 0;
        } else {
            // Increment the length of the current word
            currentLength++;
        }
    }

    // Check the length of the last word if the input ends without a newline
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}