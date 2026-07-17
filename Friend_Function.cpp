//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Friend Function in C++ using VS CODE//

#include<iostream>
using namespace std;

class Number
{
private:
    int num;

public:

    Number()
    {
        num=100;
    }

    friend void display(Number);
};

void display(Number n)
{
    cout<<"Number = "<<n.num;
}

int main()
{
    Number obj;

    display(obj);

    return 0;
}