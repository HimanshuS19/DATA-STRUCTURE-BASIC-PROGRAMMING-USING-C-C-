//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Multilevel Inheritance in C++ using VS CODE//

#include<iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout<<"Enter Name : ";
        cin>>name;
    }
};

class Student : public Person
{
protected:
    int roll;

public:
    void getRoll()
    {
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
        cout<<"\nName : "<<name;
        cout<<"\nRoll Number : "<<roll;
        cout<<"\nMarks : "<<marks;
    }
};

int main()
{
    Result obj;

    obj.getName();
    obj.getRoll();
    obj.getMarks();

    obj.display();

    return 0;
}