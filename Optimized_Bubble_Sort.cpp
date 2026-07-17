//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Optimized Bubble Sort in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;

        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }

        if(!swapped)
            break;
    }

    cout<<"\nSorted Array\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}