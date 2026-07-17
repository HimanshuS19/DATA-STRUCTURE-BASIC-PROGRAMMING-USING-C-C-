//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Array Traversal in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\nArray Elements are : ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}