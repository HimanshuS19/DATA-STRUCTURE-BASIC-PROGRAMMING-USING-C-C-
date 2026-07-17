//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Virtual Function in C++ using VS CODE//

#include<iostream>
using namespace std;

class Animal
{
public:

    virtual void sound()
    {
        cout<<"Animal makes a sound."<<endl;
    }
};

class Dog : public Animal
{
public:

    void sound()
    {
        cout<<"Dog Barks."<<endl;
    }
};

class Cat : public Animal
{
public:

    void sound()
    {
        cout<<"Cat Meows."<<endl;
    }
};

int main()
{
    Animal *ptr;

    Dog d;
    Cat c;

    ptr=&d;
    ptr->sound();

    ptr=&c;
    ptr->sound();

    return 0;
}