//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Destructor in C++ using VS CODE//

#include<iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout<<"Constructor Called"<<endl;
    }

    ~Demo()
    {
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    Demo obj;

    cout<<"Inside Main Function"<<endl;

    return 0;
}