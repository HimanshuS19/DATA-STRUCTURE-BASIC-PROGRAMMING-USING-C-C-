//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Sum of N Natural Numbers in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum=0;

    printf("Enter Value of N : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("\nSum = %d",sum);

    return 0;
}