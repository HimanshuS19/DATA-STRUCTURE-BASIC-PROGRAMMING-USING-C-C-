//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Queue using Array in C++ using VS CODE//

#include<iostream>
using namespace std;

#define MAX 100

class Queue
{
    int arr[MAX];
    int front,rear;

public:

    Queue()
    {
        front=0;
        rear=-1;
    }

    void enqueue(int value)
    {
        if(rear==MAX-1)
        {
            cout<<"Queue Overflow";
            return;
        }

        arr[++rear]=value;
    }

    void display()
    {
        cout<<"\nQueue Elements\n";

        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);

    q.display();

    return 0;
}