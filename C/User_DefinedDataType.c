#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//구조체 선언하고 멤버를 사용
// struct student
// {
//     int num;
//     double grade;
// };

// int main(){
//     struct student s1;

//     s1.num = 2;
//     s1.grade = 2.7;

//     printf("학번: %d\n", s1.num);
//     printf("학점: %.1lf\n", s1.grade);
// }

//배열과 포인터를 갖는 구조체 사용
// struct profile
// {
//     /* data */
//     char name[20];
//     int age;
//     double height;
//     char *intro;
// };

// int main(){
//     struct profile min;

//     strcpy(min.name, "Minsung Kim");
//     min.age = 25;
//     min.height = 173.1;

//     min.intro = (char *)malloc(80);
//     printf("Self Intro: ");
//     gets(min.intro);

//     printf("Name: %s\n", min.name);
//     printf("Age: %d\n", min.age);
//     printf("Height: %.1lf\n", min.height);
//     printf("Self Introduction: %s\n", min.intro);

//     free(min.intro);

//     return 0;
// }

//다른 구조체의 멤버로 갖는 구조체 사용
// struct profile
// {
//     /* data */
//     int age;
//     double height;
// };
// struct student
// {
//     /* data */
//     struct profile pf;
//     int id;
//     double grade;
// };


// int main(){
//     struct student min;

//     min.pf.age = 25;
//     min.pf.height = 173.2;
//     min.id = 315;
//     min.grade = 4.3;

//     printf("age: %d\n", min.pf.age);
//     printf("height: %.1lf\n", min.pf.height);
//     printf("ID: %d\n", min.id);
//     printf("grade: %.1lf\n", min.grade);

//     return 0;
// }

//최고 학점의 학생 데이터
// struct student
// {
//     /* data */
//     int id;
//     char name[20];
//     double grade;
// };

// int main(){
//     struct student s1 = {315, "Minsung", 4.4}, s2 = {316, "Ronald", 2.4}, s3 = {317, "Gordan", 4.4};
//     struct student max;

//     max = s1;
//     if(s2.grade > max.grade) max = s2;
//     if(s3.grade > max.grade) max = s3;

//     printf("name: %s, ID: %d, grade: %.1lf", max.name, max.id, max.grade);

//     return 0;
// }

//구조체를 반환하여 두 변수의 값 교환
// struct vision
// {
//     /* data */
//     double left;
//     double right;
// };

// struct vision exchange(struct vision robot);

// int main(){
//     struct vision robot;

//     printf("시력 입력: ");
//     scanf("%lf%lf", &(robot.left), &(robot.right));
//     robot = exchange(robot);
//     printf("바뀐 시력: %.1lf %.1lf", robot.left, robot.right);

//     return 0;
// }

// struct vision exchange(struct vision robot){
//     double temp;

//     temp = robot.left;
//     robot.left = robot.right;
//     robot.right = temp;

//     return robot;
// }

//구조체 포인터
// struct score
// {
//     /* data */
//     int kor;
//     int eng;
//     int math;
// };

// int main(){
//     struct score min = {90, 80, 70};
//     struct score *ps = &min;

//     printf("kor: %d\n", (*ps).kor);
//     printf("eng: %d\n", ps -> eng);
//     printf("math: %d\n", ps -> math);

//     return 0;
// }

//구조체 배열
// struct address
// {
//     /* data */
//     char name[20];
//     int age;
//     char tel[20];
//     char addr[80];
// };

// int main(){
//     struct address list[5] = {{"홍길동", 23, "111-1111", "울릉도"}, 
//                               {"이순신", 35, "222-2222", "서울"},
//                               {"장보고", 19, "333-3333", "완도"},
//                               {"유관순", 15, "444-4444", "충남"},
//                               {"안준근", 45, "555-5555", "황해도"}
//                               };
//     int i;

//     for(i=0;i<5;i++){
//         printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//     }
//     return 0;
// }

//함수 이용해서 구조체 배열 출력
// struct address
// {
//     /* data */
//     char name[20];
//     int age;
//     char tel[20];
//     char addr[80];
// };
// void print_list(struct address *lp);
// int main(){
//     struct address list[5] = {{"홍길동", 23, "111-1111", "울릉도"}, 
//                               {"이순신", 35, "222-2222", "서울"},
//                               {"장보고", 19, "333-3333", "완도"},
//                               {"유관순", 15, "444-4444", "충남"},
//                               {"안준근", 45, "555-5555", "황해도"}
//                               };
//     int i;

//     print_list(list);
    
//     return 0;
// }
// void print_list(struct address *lp){
//     int i;
//     for(i=0;i<5;i++){
//         printf("%10s%5d%15s%20s\n", (lp+i)->name, (lp+i)->age, (lp+i)->tel, (lp+i)->addr);  //lp[i].name, lp[i].age, lp[i].tel, lp[i].addr
//     }
// }

//자기 참조 구조체, Linked List
// struct list
// {
//     /* data */
//     int num;
//     struct list *next;
// };

// int main(){
//     struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
//     struct list *head = &a, *current;   //linked list
//     a.next = &b;
//     b.next = &c;

//     printf("head->sum: %d\n", head->num);
//     printf("head->next->num: %d\n", head->next->num);

//     printf("list all: ");
//     current = head;
//     while(current != NULL){
//         printf("%d ", current->num);
//         current = current->next;
//     }
//     printf("\n");

//     return 0;
// }

//공용체를 사용한 학번과 학점 데이터 처리
// union student
// {
//     /* data */
//     int num;
//     double grade;
// };

// int main(){
//     union student s1 = {315};

//     printf("ID: %d\n", s1.num);
//     s1.grade = 4.4;
//     printf("score: %.1lf\n", s1.grade);
//     printf("ID: %d\n", s1.num);

//     return 0;
// }

//열거형
// enum season {SPRING, SUMMER, FALL, WINTER};

// int main(){
//     enum season ss;
//     char *pc = NULL;

//     ss = WINTER;
//     switch(ss){
//         case SPRING:
//             pc = "inline";break;
//         case SUMMER:
//             pc = "swimming";break;
//         case FALL:
//             pc = "trip";break;
//         case WINTER:
//             pc = "skiing";break;
//     }
//     printf("my leisure => %s\n", pc);
// }

//typedef 사용한 자료형 재정의
// struct student{
//     int num;
//     double grade;
// };
// typedef struct student Student;
// void print_data(Student *ps);

// int main(){
//     Student s1 = {315, 4.2};
//     print_data(&s1);

//     return 0;
// }

// void print_data(Student *ps){
//     printf("ID: %d\n", ps->num);
//     printf("Grade: %.1lf\n", ps->grade);
// }

//prac01
// struct marriage
// {
//     /* data */
//     char name[20];
//     int age;
//     char sex;
//     double height;
// };
// int main(){
//     struct marriage m1 = {"Andy", 22, 'm', 187.5};
//     struct marriage *mp = &m1;
//     printf("name: %s\n", mp->name);
//     printf("age: %d\n", mp->age);
//     printf("sex: %c\n", mp->sex);
//     printf("height: %.1lf\n", mp->height);

//     return 0;
// }

//prac02
// typedef struct train Train;

// struct train{
//     int seats;
//     struct train *next;
// };

// int main(){
//     Train *head = NULL, *tail = NULL;
//     int i;
//     for(i=0;i<5;i++){
//         if(head == NULL){
//             head = tail = (Train *)malloc(sizeof(Train));
//         }
//         else{
//             tail->next = (Train *)malloc(sizeof(Train));
//             tail = tail -> next;
//         }
//     }
//     return 0;
// }

//성적 처리 프로그램
typedef struct
{
    /* data */
    int id;
    char name[20];
    int kor, eng, math;
    double adv;
    char score[10];
} Student;

void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(Student *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].adv < arr[j + 1].adv) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(){
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student *list = (Student *)malloc(n * sizeof(Student));    //Allocate memory size for list
    if(list == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }                                                           /*= {{315, "Minsung", 80, 75, 90, 0, 'B'},
                                                                    {316, "Ronald", 88, 92, 100, 0, 'A'},
                                                                    {317, "Gordan", 95, 99, 98, 0, 'A'},
                                                                    {318, "kike", 84, 70, 72, 0, 'C'},
                                                                    {319, "Matt", 60, 65, 40, 0, 'F'}};*/

    printf("Enter student details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &list[i].id);
        printf("Enter name: ");
        scanf("%s", list[i].name);
        printf("Enter scores for Korean, English, and Math (separated by spaces): ");
        scanf("%d %d %d", &list[i].kor, &list[i].eng, &list[i].math);

        list[i].adv = (list[i].kor + list[i].eng + list[i].math) / 3.0; // Calculate average score

        if (list[i].adv >= 90) strcpy(list[i].score, "A");  //Condition for scores
        else if(list[i].adv >= 80) strcpy(list[i].score, "B");
        else if(list[i].adv >= 70) strcpy(list[i].score, "C");
        else strcpy(list[i].score, "F");

    }
    
    printf("# 정렬 전 데이터\n");
    for(i=0;i<5;i++){
        printf("ID: %3d, name: %8s, kor: %3d, eng: %3d, math: %3d, adv: %.1lf, score: %3s", list[i].id, list[i].name,list[i].kor,list[i].eng,list[i].math, list[i].adv, list[i].score);
        printf("\n");
    }
    bubbleSort(list, 5);
    printf("# 정렬 후 데이터\n");
    for(i=0;i<5;i++){
        printf("ID: %3d, name: %8s, kor: %3d, eng: %3d, math: %3d, adv: %.1lf, score: %s", list[i].id, list[i].name,list[i].kor,list[i].eng,list[i].math, list[i].adv, list[i].score);
        printf("\n");
    }

    free(list);
    return 0;
}