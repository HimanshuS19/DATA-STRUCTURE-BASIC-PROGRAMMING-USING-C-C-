//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Grade Calculation in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float marks[5],sum=0,percentage;
    int i;

    printf("Enter Marks of Five Subjects:\n");

    for(i=0;i<5;i++)
    {
        printf("Subject %d : ",i+1);
        scanf("%f",&marks[i]);
        sum+=marks[i];
    }

    percentage=sum/5;

    printf("\nPercentage = %.2f%%",percentage);

    if(percentage>=90)
        printf("\nGrade : A");

    else if(percentage>=80)
        printf("\nGrade : B");

    else if(percentage>=60)
        printf("\nGrade : C");

    else
        printf("\nGrade : D");

    return 0;
}