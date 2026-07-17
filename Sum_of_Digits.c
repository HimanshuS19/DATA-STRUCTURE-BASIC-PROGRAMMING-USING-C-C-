//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Sum of Digits of a Number in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,sum=0,remainder;

    printf("Enter a Number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }

    printf("\nSum of Digits = %d",sum);

    return 0;
}