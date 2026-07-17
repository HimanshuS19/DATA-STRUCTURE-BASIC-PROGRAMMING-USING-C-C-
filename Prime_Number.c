//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Prime Number Check in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i,flag=1;

    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("\n%d is Not a Prime Number.",num);
        return 0;
    }

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("\n%d is a Prime Number.",num);
    else
        printf("\n%d is Not a Prime Number.",num);

    return 0;
}