//The Below Program is for Binary Search Implementation in c using VS CODE
//-------------BY HIMANSHU SINGH---------------//
#include<Stdio.h>
#include <stdlib.h>
 int main ()
{
 int i,n,item,loc,beg,end,mid;                                     
 printf("\nEnter the total number of elements: \t");
 scanf("%d",&n);
 
 int arr[n];

for(i=0;i<n;i++)
 {printf("\t Enter elements %d :", i+1);
 scanf("%d",&arr[i]);
 }
printf("\n Array Elements : ");
{
 for(i=0;i<n;i++)
  printf("\t %d", arr[i]);
}
printf("\nenter the element to be search by Binary Search\t");
scanf("%d",&item);
beg=0;
end=n-1; 

while(beg<=end)
{ mid=(beg+end)/2;
    
    if(arr[mid]==item)
    {
        loc=mid;
        printf("\n item %d is at %d location \t",arr[mid],loc+1);
         exit(0);
    }
if (item<arr[mid])
end=mid-1;
if(item>arr[mid])
beg=mid+1;
mid=(beg+end)/2;
}
if(item>arr[n-1])
printf("\n item is not in the list");
}
