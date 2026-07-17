//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Factorial using Recursion in C++ using VS CODE//

#include<iostream>
using namespace std;

long long factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n*factorial(n-1);
}

int main()
{
    int num;

    cout<<"Enter Number : ";
    cin>>num;

    cout<<"Factorial = "<<factorial(num);

    return 0;
}