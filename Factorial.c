//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Factorial of a Number in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    long long factorial=1;

    printf("Enter a Number : ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Factorial of Negative Number Does Not Exist.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }

        printf("\nFactorial = %lld",factorial);
    }

    return 0;
}