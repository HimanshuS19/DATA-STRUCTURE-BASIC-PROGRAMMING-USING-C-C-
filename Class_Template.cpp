//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Class Template in C++ using VS CODE//

#include<iostream>
using namespace std;

template<class T>

class Calculator
{
    T a,b;

public:

    Calculator(T x,T y)
    {
        a=x;
        b=y;
    }

    void add()
    {
        cout<<"Addition = "<<a+b<<endl;
    }

    void multiply()
    {
        cout<<"Multiplication = "<<a*b<<endl;
    }
};

int main()
{
    Calculator<int> obj1(10,20);

    obj1.add();
    obj1.multiply();

    Calculator<float> obj2(2.5,4.5);

    obj2.add();
    obj2.multiply();

    return 0;
}