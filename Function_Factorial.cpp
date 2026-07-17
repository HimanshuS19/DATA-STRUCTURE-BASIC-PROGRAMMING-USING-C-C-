//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Factorial using Function in C++ using VS CODE//

#include<iostream>
using namespace std;

long long factorial(int n)
{
    long long fact=1;

    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}

int main()
{
    int num;

    cout<<"Enter a Number : ";
    cin>>num;

    cout<<"\nFactorial = "<<factorial(num);

    return 0;
}