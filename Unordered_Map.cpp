//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Unordered Map using STL in C++ using VS CODE//

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,string> student;

    student[101]="Rahul";
    student[102]="Aman";
    student[103]="Priya";
    student[104]="Himanshu";

    cout<<"Student Records\n\n";

    for(auto x : student)
    {
        cout<<"Roll No : "<<x.first<<"\tName : "<<x.second<<endl;
    }

    return 0;
}