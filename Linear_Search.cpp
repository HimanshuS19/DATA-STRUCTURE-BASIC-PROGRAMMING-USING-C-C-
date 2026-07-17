//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Linear Search Implementation in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,item,loc=-1;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\nEnter Element to Search : ";
    cin>>item;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            loc=i;
            break;
        }
    }

    if(loc!=-1)
        cout<<"\nElement Found at Position "<<loc+1;

    else
        cout<<"\nElement Not Found.";

    return 0;
}