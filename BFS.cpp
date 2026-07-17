//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Breadth First Search (BFS) in C++ using VS CODE//

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    vector<int> graph[100];
    bool visited[100]={false};

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

    queue<int> q;

    q.push(0);
    visited[0]=true;

    cout<<"\nBFS Traversal\n";

    while(!q.empty())
    {
        int current=q.front();
        q.pop();

        cout<<current<<" ";

        for(int node:graph[current])
        {
            if(!visited[node])
            {
                visited[node]=true;
                q.push(node);
            }
        }
    }

    return 0;
}