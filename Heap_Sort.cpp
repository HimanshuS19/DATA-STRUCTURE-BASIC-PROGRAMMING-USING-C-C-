//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Heap Sort in C++ using VS CODE//

#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest])
        largest=left;

    if(right<n && arr[right]>arr[largest])
        largest=right;

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

int main()
{
    int arr[100],n;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);

    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

    cout<<"\nSorted Array\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}