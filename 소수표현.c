#include<stdio.h>

int main() {

    int i, Number, count;

    printf(" Prime Number from 1 to 100 are: \n");
    for (Number = 1; Number <= 100; Number++)
    {
        count = 0;                              //count�� ������ ����??
        for (i = 2; i <= Number / 2; i++)
        {
            if (Number % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && Number != 1)
        {
            printf(" %d ", Number);
        }
    }

    return 0;
}