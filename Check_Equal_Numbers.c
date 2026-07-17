//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Checking Equality of Two Numbers in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    if(num1==num2)
        printf("\nBoth Numbers are Equal.\n");
    else
        printf("\nBoth Numbers are Not Equal.\n");

    return 0;
}