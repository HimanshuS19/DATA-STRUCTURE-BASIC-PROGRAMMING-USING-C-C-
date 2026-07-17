//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Decimal to Binary Conversion in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int num;
    int binary[32];
    int i=0;

    cout<<"Enter Decimal Number : ";
    cin>>num;

    while(num>0)
    {
        binary[i]=num%2;
        num=num/2;
        i++;
    }

    cout<<"\nBinary Number = ";

    for(int j=i-1;j>=0;j--)
        cout<<binary[j];

    return 0;
}