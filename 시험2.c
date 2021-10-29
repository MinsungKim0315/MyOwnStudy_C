#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


void seed() { srand((unsigned int)time(0)); }
void sortnum(int[]);

int main(void)
{
    int count;
    int numbers[100];
    seed();
  
    for (count = 0; count < 100; count++)
    {
        numbers[count] = (rand() % 100) + 1;
    }

    printf("100개의 랜덤숫자들 : \n");
    for (count = 0; count < 100; count++)
    {
        printf("%d ", numbers[count]);
    }

    putc('\n', stdout);

    sortnum(numbers);

    printf("100개의 랜덤숫자를 큰 순서대로 Sort : \n");
    for (count = 0; count < 100; count++)
    {
        printf("%d ", numbers[count]);
    }
    putc('\n', stdout);

    return 0;
}

void sortnum(int nums[])
{
    int temp;
    int count;
    int count2;

    for (count = 0; count < 100; count++)
        for (count2 = count + 1; count2 < 100; count2++)
        {
            temp = nums[count] < nums[count2] ? nums[count2] : nums[count];
            nums[count2] = nums[count] < nums[count2] ? nums[count] : nums[count2];
            nums[count] = temp;
        }

    return;
}