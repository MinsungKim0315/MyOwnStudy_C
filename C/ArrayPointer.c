#include <stdio.h>

//�迭�� ���� ������ �����Ͽ� �迭 ��� ���
// int main(){
//     int ary[3];
//     int i;

//     *(ary + 0) = 10; //ary[0] = 10
//     *(ary + 1) = *(ary + 0) + 10;   //ary[1] = ary[0] + 10 = 20

//     printf("insert third element: ");
//     scanf("%d", ary + 2);   //ary[2]

//     for(i = 0; i < 3;i++){
//         printf("%5d", *(ary + i));
//     }

//     return 0;
// }

//�迭��ó�� ���Ǵ� ������
// int main(){
//     int ary[3];
//     int *pa = ary;
//     int i;

//     *pa = 10;
//     *(pa + 1) = 20; // pa[1] = 20; �� ����
//     pa[2] = pa[0] + pa[1];  //���ȣ �Ἥ pa�� �迭��ó�� ���

//     for(i=0;i<3;i++){
//         printf("%4d", pa[i]);
//     }

//     return 0;
// }

//�����͸� �̿��� �迭�� �� ���
// int main(){
//     int ary[3] = {1, 2, 3};
//     int *pa = ary;
//     int i;

//     printf("array: ");
//     for(i=0;i<3;i++){
//         printf("%d ", *pa);     //printf("%d ", *(pa++))�� ����
//         pa++;
//     }
//     return 0;
// }

//�������� ����
// int main(){
//     int ary[5] = {1, 2, 3, 4, 5};
//     int *pa = ary;
//     int *pb = pa + 3;

//     printf("pa: %u\n", pa);
//     printf("pb: %u\n", pb);
//     pa++;
//     printf("pb - pa = %u\n", pb - pa);  //�������� ������ �迭 ��һ����� �������̸� �ǹ�

//     return 0;
// }

//�迭�� ó���ϴ� �Լ�
// void print_ary(int *pa);

// int main(){
//     int ary[5] = {1, 2, 3, 4, 5};

//     print_ary(ary);

//     return 0;
// }
// void print_ary(int *pa){
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d ", pa[i]);
//     }
// }

//ũ�Ⱓ �ٸ� �迭�� ����ϴ� �Լ�
// void print_ary(int *pa, int size);

// int main(){
//     int ary1[5] = {1, 2, 3, 4, 5};
//     int ary2[7] = {1, 2, 3, 4, 5, 6, 7};

//     print_ary(ary1, sizeof(ary1)/sizeof(ary1[0]));  //C does not have a function like len()
// printf("\n");                                       //need to do sizeof(array)/sizeof(array[0]) to get length
//     print_ary(ary2, sizeof(ary2)/sizeof(ary2[0]));

//     return 0;

// }

// void print_ary(int *pa, int size){
//     int i;

//     for(i=0;i<size;i++){
//         printf("%d ", pa[i]);
//     }
// }

//�迭�� ���� �Է��ϴ� �Լ�
// void input_ary(double *pa, int size);
// double find_max(double *pa, int size);

// int main(){
//     double ary[5];
//     double max;
//     int size = sizeof(ary)/sizeof(ary[0]);

//     input_ary(ary, size);
//     max = find_max(ary, size);
//     printf("max value of array: %.1lf\n", max);

//     return 0;
// }
// void input_ary(double *pa, int size){
//     int i;

//     printf("insert %d variables for array: ", size);
//     for(i=0;i<size;i++){
//         scanf("%lf", &pa[i]);
//     }   
// }
// double find_max(double *pa, int size){
//     double max;
//     int i;
//     max = pa[0];

//     for(i=1;i<size;i++){
//         if(pa[i] > max) max = pa[i];
//     }
//     return max;
// }

//�Լ��� �Ű����� �ڸ��� �迭�� �����ϴ� ���
// void print_ary(int pa[5]);

// int main(){
//     int ary[5] = {1, 2, 3, 4, 5};

//     print_ary(ary);

//     return 0;
// }
// void print_ary(int pa[5]){
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d ", pa[i]);
//     }
// }

//�ζ� ��ȣ ���� ���α׷�
void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(){
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);

    return 0;
}
void input_nums(int *lotto_nums){
    int i, j;

    printf("insert 6 numbers: \n");

    for(i=0;i<6;i++){
        printf("%dth number: ", i + 1);
        scanf("%d", &lotto_nums[i]);
        for(j=0;j<i;j++){
            if(lotto_nums[i] == lotto_nums[j]){
                printf("Dublicated number detected. Enter a different number: \n");
                i--;
                break;
            }
        }
    }
}
void print_nums(int *lotto_nums){
    int i;

    for(i=0;i<6;i++){
        printf("%d ", lotto_nums[i]);
    }
}