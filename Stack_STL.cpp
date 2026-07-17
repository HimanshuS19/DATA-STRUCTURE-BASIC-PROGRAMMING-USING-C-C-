//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Stack using STL in C++ using VS CODE//

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Top Element = "<<st.top()<<endl;

    st.pop();

    cout<<"Top After Pop = "<<st.top()<<endl;

    cout<<"\nStack Elements\n";

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}