//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Armstrong Number Check in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,temp,remainder,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+(remainder*remainder*remainder);
        temp=temp/10;
    }

    if(sum==num)
        printf("\n%d is an Armstrong Number.",num);
    else
        printf("\n%d is Not an Armstrong Number.",num);

    return 0;
}