//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Function Template in C++ using VS CODE//

#include<iostream>
using namespace std;

template<class T>

T maximum(T a,T b)  
{
    if(a>b)
        return a;

    return b;
}

int main()
{
    cout<<"Maximum Integer = "<<maximum(20,35)<<endl;

    cout<<"Maximum Float = "<<maximum(25.6,14.3)<<endl;

    cout<<"Maximum Character = "<<maximum('A','Z')<<endl;

    return 0;
}