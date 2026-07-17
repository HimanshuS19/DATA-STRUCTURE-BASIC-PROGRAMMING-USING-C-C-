//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Fibonacci Series in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int first=0,second=1,next;

    printf("Enter Number of Terms : ");
    scanf("%d",&n);

    printf("\nFibonacci Series : ");

    for(i=1;i<=n;i++)
    {
        printf("%d ",first);

        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}