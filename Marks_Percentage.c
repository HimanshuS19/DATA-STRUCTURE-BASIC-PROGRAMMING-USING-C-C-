//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Marks Percentage Calculation in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float marks[5], sum = 0, percentage;
    int i;

    printf("\nEnter Marks of 5 Subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d : ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    percentage = sum / 5;

    printf("\nTotal Marks = %.2f", sum);
    printf("\nPercentage = %.2f%%\n", percentage);

    return 0;
}