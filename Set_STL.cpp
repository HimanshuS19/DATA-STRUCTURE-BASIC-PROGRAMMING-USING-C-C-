//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Set in C++ using VS CODE//

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10);
    s.insert(50);

    cout<<"Set Elements\n";

    for(auto value : s)
    {
        cout<<value<<" ";
    }

    return 0;
}