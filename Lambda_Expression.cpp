//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Lambda Expression in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    auto addition=[](int a,int b)
    {
        return a+b;
    };

    auto square=[](int x)
    {
        return x*x;
    };

    cout<<"Addition = "<<addition(10,20)<<endl;

    cout<<"Square = "<<square(8)<<endl;

    return 0;
}