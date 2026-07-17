//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for File Handling in C++ using VS CODE//

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("student.txt");

    fout<<"Name : Himanshu Singh"<<endl;
    fout<<"Course : B.Tech CSE (AI & ML)"<<endl;
    fout<<"College : JSSATEN Noida"<<endl;

    fout.close();

    ifstream fin("student.txt");

    string line;

    cout<<"File Contents\n\n";

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}