//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Reverse of a Number in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,reverse=0,remainder;

    printf("Enter a Number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }

    printf("\nReverse Number = %d",reverse);

    return 0;
}