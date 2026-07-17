//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Linear Search Implementation in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100];
    int n,i,item,loc=-1;

    printf("Enter Total Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter Element to Search : ");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            loc=i;
            break;
        }
    }

    if(loc!=-1)
        printf("\nElement %d Found at Position %d",item,loc+1);
    else
        printf("\nElement Not Found.");

    return 0;
}