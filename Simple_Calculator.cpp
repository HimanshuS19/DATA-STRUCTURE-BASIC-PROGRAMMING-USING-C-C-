//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Simple Calculator in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    float num1,num2;
    char op;

    cout<<"Enter First Number : ";
    cin>>num1;

    cout<<"Enter Operator (+,-,*,/) : ";
    cin>>op;

    cout<<"Enter Second Number : ";
    cin>>num2;

    switch(op)
    {
        case '+':
            cout<<"\nResult = "<<num1+num2;
            break;

        case '-':
            cout<<"\nResult = "<<num1-num2;
            break;

        case '*':
            cout<<"\nResult = "<<num1*num2;
            break;

        case '/':
            if(num2!=0)
                cout<<"\nResult = "<<num1/num2;
            else
                cout<<"\nDivision by Zero is Not Allowed.";

            break;

        default:
            cout<<"\nInvalid Operator.";
    }

    return 0;
}