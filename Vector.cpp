//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Vector in C++ using VS CODE//

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int n,value;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>value;
        numbers.push_back(value);
    }

    cout<<"\nVector Elements\n";

    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<"\n\nVector Size = "<<numbers.size();

    return 0;
}