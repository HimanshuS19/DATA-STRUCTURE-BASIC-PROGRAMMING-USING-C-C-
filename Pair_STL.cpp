//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Pair using STL in C++ using VS CODE//

#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int,string> student;

    student.first=101;
    student.second="Himanshu";

    cout<<"Roll Number : "<<student.first<<endl;
    cout<<"Student Name : "<<student.second<<endl;

    return 0;
}