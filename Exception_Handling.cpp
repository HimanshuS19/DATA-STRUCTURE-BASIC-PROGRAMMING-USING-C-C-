//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Exception Handling in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter Two Numbers : ";
    cin>>a>>b;

    try
    {
        if(b==0)
            throw b;

        cout<<"\nDivision = "<<a/b;
    }

    catch(int)
    {
        cout<<"\nException Caught : Division by Zero is Not Allowed.";
    }

    cout<<"\nProgram Executed Successfully.";

    return 0;
}