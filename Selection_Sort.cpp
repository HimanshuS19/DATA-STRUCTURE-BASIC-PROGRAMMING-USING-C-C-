//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Selection Sort in C++ using VS CODE//

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
        int min=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }

        swap(arr[i],arr[min]);
    }

    cout<<"\nSorted Array\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}