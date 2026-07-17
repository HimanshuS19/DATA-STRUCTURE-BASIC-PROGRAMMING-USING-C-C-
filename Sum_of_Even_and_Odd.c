//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Sum of Even and Odd Numbers from 1 to N in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int evenSum=0,oddSum=0;

    printf("Enter Value of N : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            evenSum+=i;
        else
            oddSum+=i;
    }

    printf("\nSum of Even Numbers = %d",evenSum);
    printf("\nSum of Odd Numbers = %d",oddSum);

    return 0;
}