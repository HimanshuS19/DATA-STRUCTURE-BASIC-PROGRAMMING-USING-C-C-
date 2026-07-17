//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Shell Sort in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int arr[100],n;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int gap=n/2;gap>0;gap/=2)
    {
        for(int i=gap;i<n;i++)
        {
            int temp=arr[i];
            int j;

            for(j=i;j>=gap && arr[j-gap]>temp;j-=gap)
                arr[j]=arr[j-gap];

            arr[j]=temp;
        }
    }

    cout<<"\nSorted Array\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}