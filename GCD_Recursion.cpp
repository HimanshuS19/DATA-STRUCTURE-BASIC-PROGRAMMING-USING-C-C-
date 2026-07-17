//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for GCD using Recursion in C++ using VS CODE//

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    int a,b;

    cout<<"Enter Two Numbers : ";
    cin>>a>>b;

    cout<<"\nGreatest Common Divisor = "<<gcd(a,b);

    return 0;
}