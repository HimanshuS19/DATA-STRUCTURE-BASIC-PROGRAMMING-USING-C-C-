//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Bubble Sort Implementation in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100];
    int n,i,j,temp;

    printf("Enter Total Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nSorted Array (Ascending Order)\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}