//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Matrix Multiplication in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int row,col;

    cout<<"Enter Order of Square Matrix : ";
    cin>>row;

    col=row;

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

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=0;

            for(int k=0;k<col;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    cout<<"\nMultiplication Matrix\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}