//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Finding Largest Number using Function in C++ using VS CODE//

#include<iostream>
using namespace std;

int largest(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int num1,num2;

    cout<<"Enter Two Numbers : ";
    cin>>num1>>num2;

    cout<<"\nLargest Number = "<<largest(num1,num2);

    return 0;
}