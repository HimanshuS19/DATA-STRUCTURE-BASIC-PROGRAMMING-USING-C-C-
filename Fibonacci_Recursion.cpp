//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Fibonacci using Recursion in C++ using VS CODE//

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
        return n;

    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;

    cout<<"Enter Number of Terms : ";
    cin>>n;

    cout<<"\nFibonacci Series\n";

    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }

    return 0;
}