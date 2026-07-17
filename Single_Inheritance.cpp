//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Single Inheritance in C++ using VS CODE//

#include<iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:

    void input()
    {
        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Enter Roll Number : ";
        cin>>roll;
    }
};

class Result : public Student
{
private:
    float marks;

public:

    void getMarks()
    {
        cout<<"Enter Marks : ";
        cin>>marks;
    }

    void display()
    {
        cout<<"\nStudent Details";
        cout<<"\nName : "<<name;
        cout<<"\nRoll Number : "<<roll;
        cout<<"\nMarks : "<<marks;
    }
};

int main()
{
    Result obj;

    obj.input();
    obj.getMarks();
    obj.display();

    return 0;
}