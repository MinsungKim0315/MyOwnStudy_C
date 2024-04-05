#include<stdio.h>

//giving total score and adverage of 3 students-2D array
// int main(){
//     int score[3][4];
//     int total;
//     double avg;
//     int i, j;

//     for(i=0;i<3;i++){
//         printf("insert scores for 4 subjects: ");
//         for(j=0;j<4;j++){
//             scanf("%d", &score[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         total = 0;
//         for(j=0;j<4;j++){
//             total += score[i][j];
//         }
//         avg = total / 4.0;
//         printf("total score: %d, average: %.2lf\n", total, avg);
//     }
//     return 0;
// }

//input several animal names and print them -2D array
// int main(){
//     char animal[5][20];
//     int i;
//     int count;

//     count = sizeof(animal)/sizeof(animal[0]);   //calculate number of rows
//     for(i=0;i<count;i++){
//         scanf("%s", animal[i]);
//     }
//     for(i=0;i<count;i++){
//         printf("%s ", animal[i]);
//     }
//     return 0;
// }

//2 class, 3 students, 4 subjects -3D array
// int main(){
//     int score[2][3][4] = {
//         {{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
//         {{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
//     };
//     int i, j, k;
//     for(i=0;i<2;i++){
//         printf("class %d score...\n", i + 1);
//         for(j=0;j<3;j++){
//             for(k=0;k<4;k++){
//                 printf("%5d", score[i][j][k]);
//             }
//         printf("\n");
//         }
//     }
//     return 0;
// }

//Practice
// int main(){
//     char mark[5][5];
//     int i, j;

//     for(i = 0; i < 5; i++){
//         for(j = 0; j < 5; j++){
//             if(i == j) mark[i][j] = 'X';
//             else mark[i][j] = ' ';
//             printf("%c", mark[i][j]);
//         }
//         printf("\n");
//     }
   
//     return 0;
// }

//Practice
// int main(){
//     char mark[5][5];
//     int i, j;

//     for(i = 0; i < 5; i++){
//         for(j = 0; j < 5; j++){
//             if(i == j) mark[i][j] = 'X';
//             else if((i + j) == 4) mark[i][j] = 'X';
//             else mark[i][j] = ' ';
//             printf("%c", mark[i][j]);
//         }
//         printf("\n");
//     }
   
//     return 0;
// }

//포인터 배열로 여러 개의 문자열 출력
// int main(){
//     char *pary[5];
//     int i;

//     pary[0] = "dog";
//     pary[1] = "elephant";
//     pary[2] = "horse";
//     pary[3] = "tiger";
//     pary[4] = "lion";

//     for(i = 0;i<5;i++){
//         printf("%s\n", pary[i]);
//     }
// }

//여러개의 1차원 배열을 2차원 배열처럼 사용
// int main(){
//     int ary1[4] = {1, 2, 3, 4};
//     int ary2[4] = {11, 12, 13, 14};
//     int ary3[4] = {21, 22, 23, 23};
//     int *pary[3] = {ary1, ary2, ary3};
//     int i, j;

//     for(i=0;i<3;i++){
//         for(j=0;j<4;j++){
//             printf("%5d", pary[i][j]);
//         }
//     printf("\n");
//     }
//     return 0;
// }

//sum of horizontals and verticals
int main(){
    int ary1[6] = {1, 2, 3, 4, 5, 0};
    int ary2[6] = {6, 7, 8, 9, 10, 0};
    int ary3[6] = {11, 12, 13, 14, 15, 0};
    int ary4[6] = {16, 17, 18, 19, 20, 0};
    int ary5[6] = {0, 0, 0, 0, 0, 0};
    int *pary[5] = {ary1, ary2, ary3, ary4, ary5};
    int i, j;
    int sum = 0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            sum +=  pary[i][j];
            pary[i][5] = sum;
        }
        sum = 0;
    }

    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            sum += pary[j][i];
            pary[4][i] = sum;
        }
        sum = 0;
    }

    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            printf("%5d", pary[i][j]);
        }
    printf("\n");
    }

    return 0;
}
