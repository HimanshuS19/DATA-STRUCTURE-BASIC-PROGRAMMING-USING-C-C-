//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Queue using STL in C++ using VS CODE//

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout<<"Front Element = "<<q.front()<<endl;
    cout<<"Rear Element = "<<q.back()<<endl;

    cout<<"\nQueue Elements\n";

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}