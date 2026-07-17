//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Checking Even or Odd Number in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num%2==0)
        printf("\n%d is an Even Number.",num);
    else
        printf("\n%d is an Odd Number.",num);

    return 0;
}