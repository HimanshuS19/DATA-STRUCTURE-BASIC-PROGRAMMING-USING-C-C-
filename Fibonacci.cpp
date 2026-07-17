//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Fibonacci Series in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int n;
    int first=0, second=1, next;

    cout<<"Enter Number of Terms : ";
    cin>>n;

    cout<<"\nFibonacci Series : ";

    for(int i=1;i<=n;i++)
    {
        cout<<first<<" ";

        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}