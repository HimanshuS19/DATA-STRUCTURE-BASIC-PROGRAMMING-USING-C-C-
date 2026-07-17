//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Function Overloading in C++ using VS CODE//

#include<iostream>
using namespace std;

class Addition
{
public:

    int add(int a,int b)
    {
        return a+b;
    }

    float add(float a,float b)
    {
        return a+b;
    }

    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};

int main()
{
    Addition obj;

    cout<<"Addition of Two Integers = "<<obj.add(10,20)<<endl;

    cout<<"Addition of Two Floats = "<<obj.add(12.5f,8.5f)<<endl;

    cout<<"Addition of Three Integers = "<<obj.add(5,10,15)<<endl;

    return 0;
}