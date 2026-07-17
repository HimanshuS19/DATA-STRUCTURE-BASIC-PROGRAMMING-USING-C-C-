//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Binary Search Implementation in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,item;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    cout<<"\nEnter Elements in Sorted Order\n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nEnter Element to Search : ";
    cin>>item;

    int beg=0;
    int end=n-1;

    while(beg<=end)
    {
        int mid=(beg+end)/2;

        if(arr[mid]==item)
        {
            cout<<"\nElement Found at Position "<<mid+1;
            return 0;
        }

        else if(item<arr[mid])
            end=mid-1;

        else
            beg=mid+1;
    }

    cout<<"\nElement Not Found.";

    return 0;
}