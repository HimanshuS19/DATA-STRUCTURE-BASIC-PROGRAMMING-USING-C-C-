//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Constructor in C++ using VS CODE//

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:

    Rectangle()
    {
        length=10;
        breadth=5;
    }

    void area()
    {
        cout<<"Length = "<<length<<endl;
        cout<<"Breadth = "<<breadth<<endl;
        cout<<"Area = "<<length*breadth;
    }
};

int main()
{
    Rectangle obj;

    obj.area();

    return 0;
}