//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Graph using Adjacency List in C++ using VS CODE//

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int vertices,edges;

    cout<<"Enter Number of Vertices : ";
    cin>>vertices;

    vector<int> graph[100];

    cout<<"Enter Number of Edges : ";
    cin>>edges;

    cout<<"\nEnter Edges\n";

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout<<"\nAdjacency List\n";

    for(int i=0;i<vertices;i++)
    {
        cout<<i<<" -> ";

        for(int node : graph[i])
            cout<<node<<" ";

        cout<<endl;
    }

    return 0;
}