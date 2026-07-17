//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Sum of Digits using Recursion in C++ using VS CODE//

#include<iostream>
using namespace std;

int sumDigits(int n)
{
    if(n==0)
        return 0;

    return (n%10)+sumDigits(n/10);
}

int main()
{
    int num;

    cout<<"Enter Number : ";
    cin>>num;

    cout<<"Sum of Digits = "<<sumDigits(num);

    return 0;
}