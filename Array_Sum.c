//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Sum of Array Elements in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;

    printf("Enter Total Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    printf("\nArray Elements : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSum of Elements = %d",sum);

    return 0;
}