//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Reverse of a Number in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int num, reverse=0, rem;

    cout<<"Enter a Number : ";
    cin>>num;

    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }

    cout<<"\nReverse Number = "<<reverse;

    return 0;
}