//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Stack using Array in C++ using VS CODE//

#include<iostream>
using namespace std;

#define MAX 100

class Stack
{
    int arr[MAX];
    int top;

public:

    Stack()
    {
        top=-1;
    }

    void push(int value)
    {
        if(top==MAX-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }

        arr[++top]=value;
    }

    void display()
    {
        cout<<"\nStack Elements\n";

        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    return 0;
}