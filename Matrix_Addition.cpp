//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Matrix Addition in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int row,col;

    cout<<"Enter Number of Rows : ";
    cin>>row;

    cout<<"Enter Number of Columns : ";
    cin>>col;

    cout<<"\nEnter First Matrix\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nEnter Second Matrix\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"\nAddition of Matrix\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}