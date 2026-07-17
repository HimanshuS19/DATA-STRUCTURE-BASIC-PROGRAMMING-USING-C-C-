//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Parameterized Constructor in C++ using VS CODE//

#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;

public:

    Student(string n,int r)
    {
        name=n;
        roll=r;
    }

    void display()
    {
        cout<<"\nStudent Details";
        cout<<"\nName : "<<name;
        cout<<"\nRoll Number : "<<roll;
    }
};

int main()
{
    Student s("Himanshu",101);

    s.display();

    return 0;
}