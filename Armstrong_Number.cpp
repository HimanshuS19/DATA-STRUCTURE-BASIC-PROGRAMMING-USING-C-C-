//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Armstrong Number Check in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int num,temp,remainder,sum=0;

    cout<<"Enter a Number : ";
    cin>>num;

    temp=num;

    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+(remainder*remainder*remainder);
        temp=temp/10;
    }

    if(sum==num)
        cout<<"\n"<<num<<" is an Armstrong Number.";
    else
        cout<<"\n"<<num<<" is Not an Armstrong Number.";

    return 0;
}