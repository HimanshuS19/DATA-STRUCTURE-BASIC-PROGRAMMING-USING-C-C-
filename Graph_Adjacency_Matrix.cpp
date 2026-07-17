//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Graph using Adjacency Matrix in C++ using VS CODE//

#include<iostream>
using namespace std;

int main()
{
    int graph[10][10];
    int vertices, edges;

    cout<<"Enter Number of Vertices : ";
    cin>>vertices;

    cout<<"Enter Number of Edges : ";
    cin>>edges;

    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            graph[i][j]=0;
        }
    }

    cout<<"\nEnter Edges (Source Destination)\n";

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u][v]=1;
        graph[v][u]=1;
    }

    cout<<"\nAdjacency Matrix\n";

    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            cout<<graph[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}