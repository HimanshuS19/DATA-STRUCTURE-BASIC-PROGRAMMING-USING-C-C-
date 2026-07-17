//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Finding Minimum and Maximum Element in an Array using C//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100], n, i;
    int min, max;

    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    min = max = arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }

    printf("\nMaximum Element = %d",max);
    printf("\nMinimum Element = %d",min);

    return 0;
}