//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Recursive Binary Search in C++ using VS CODE//

#include<iostream>
using namespace std;

int binarySearch(int arr[],int beg,int end,int item)
{
    if(beg>end)
        return -1;

    int mid=(beg+end)/2;

    if(arr[mid]==item)
        return mid;

    if(item<arr[mid])
        return binarySearch(arr,beg,mid-1,item);

    return binarySearch(arr,mid+1,end,item);
}

int main()
{
    int arr[100];
    int n,item;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter Element : ";
    cin>>item;

    int loc=binarySearch(arr,0,n-1,item);

    if(loc==-1)
        cout<<"\nElement Not Found.";

    else
        cout<<"\nElement Found at Position "<<loc+1;

    return 0;
}