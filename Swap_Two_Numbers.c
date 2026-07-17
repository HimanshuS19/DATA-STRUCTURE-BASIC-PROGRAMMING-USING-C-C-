//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Swapping Two Numbers in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, temp;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    printf("\nBefore Swapping");
    printf("\nFirst Number = %d", num1);
    printf("\nSecond Number = %d", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nAfter Swapping");
    printf("\nFirst Number = %d", num1);
    printf("\nSecond Number = %d\n", num2);

    return 0;
}