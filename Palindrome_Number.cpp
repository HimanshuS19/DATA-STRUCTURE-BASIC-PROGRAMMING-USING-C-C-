//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Palindrome Number Check in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int num,temp,reverse=0,rem;

    cout<<"Enter a Number : ";
    cin>>num;

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }

    if(reverse==num)
        cout<<"\n"<<num<<" is a Palindrome Number.";
    else
        cout<<"\n"<<num<<" is Not a Palindrome Number.";

    return 0;
}