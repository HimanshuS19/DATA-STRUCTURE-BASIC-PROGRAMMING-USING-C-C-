//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Greatest of Three Numbers in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter Three Numbers : ";
    cin>>a>>b>>c;

    if(a>=b && a>=c)
        cout<<"\nGreatest Number = "<<a;

    else if(b>=a && b>=c)
        cout<<"\nGreatest Number = "<<b;

    else
        cout<<"\nGreatest Number = "<<c;

    return 0;
}