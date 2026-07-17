//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Addition of Two Arrays in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr1[100], arr2[100], sum[100];
    int n, i;

    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    printf("\nEnter Elements of First Array\n");

    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter Elements of Second Array\n");

    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("\nResultant Array\n");

    for(i=0;i<n;i++)
    {
        sum[i]=arr1[i]+arr2[i];
        printf("%d ",sum[i]);
    }

    return 0;
}