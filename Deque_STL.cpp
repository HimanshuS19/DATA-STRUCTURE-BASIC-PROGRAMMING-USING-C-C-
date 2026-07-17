//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Deque using STL in C++ using VS CODE//

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(20);
    dq.push_front(10);

    cout<<"Deque Elements\n";

    for(auto x : dq)
    {
        cout<<x<<" ";
    }

    cout<<"\n\nFront Element = "<<dq.front();
    cout<<"\nBack Element = "<<dq.back();

    return 0;
}