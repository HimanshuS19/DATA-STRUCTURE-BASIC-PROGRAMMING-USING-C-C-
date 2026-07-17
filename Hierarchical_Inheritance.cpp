//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Hierarchical Inheritance in C++ using VS CODE//

#include<iostream>
using namespace std;

class Person
{
protected:
    string name;

public:

    void input()
    {
        cout<<"Enter Name : ";
        cin>>name;
    }
};

class Student : public Person
{
public:

    void displayStudent()
    {
        cout<<"\nStudent Name : "<<name<<endl;
    }
};

class Teacher : public Person
{
public:

    void displayTeacher()
    {
        cout<<"\nTeacher Name : "<<name<<endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout<<"Student Details"<<endl;
    s.input();
    s.displayStudent();

    cout<<"\nTeacher Details"<<endl;
    t.input();
    t.displayTeacher();

    return 0;
}