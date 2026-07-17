//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Classes and Objects in C++ using VS CODE//

#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    void input()
    {
        cout<<"Enter Student Name : ";
        cin>>name;

        cout<<"Enter Roll Number : ";
        cin>>roll;
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
    Student s;

    s.input();
    s.display();

    return 0;
}