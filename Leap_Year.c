//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Checking Leap Year in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year;

    printf("Enter Year : ");
    scanf("%d",&year);

    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        printf("\n%d is a Leap Year.",year);
    else
        printf("\n%d is Not a Leap Year.",year);

    return 0;
}