//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Prime Number Check in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int num,i;
    bool prime=true;

    cout<<"Enter a Number : ";
    cin>>num;

    if(num<=1)
        prime=false;

    for(i=2;i<=num/2 && prime;i++)
    {
        if(num%i==0)
            prime=false;
    }

    if(prime)
        cout<<"\n"<<num<<" is a Prime Number.";
    else
        cout<<"\n"<<num<<" is Not a Prime Number.";

    return 0;
}