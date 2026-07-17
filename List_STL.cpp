//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for List using STL in C++ using VS CODE//

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    numbers.push_front(5);

    cout<<"List Elements\n";

    for(auto x : numbers)
    {
        cout<<x<<" ";
    }

    return 0;
}