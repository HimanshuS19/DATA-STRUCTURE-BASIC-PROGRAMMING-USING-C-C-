//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Depth First Search (DFS) in C++ using VS CODE//

#include<iostream>
#include<vector>
using namespace std;

vector<int> graph[100];
bool visited[100];

void dfs(int node)
{
    visited[node]=true;

    cout<<node<<" ";

    for(int next:graph[node])
    {
        if(!visited[next])
            dfs(next);
    }
}

int main()
{
    int vertices,edges;

    cout<<"Enter Vertices and Edges : ";
    cin>>vertices>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout<<"\nDFS Traversal\n";

    dfs(0);

    return 0;
}