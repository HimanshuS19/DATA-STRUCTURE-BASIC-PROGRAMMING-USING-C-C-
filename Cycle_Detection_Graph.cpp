//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Cycle Detection in Undirected Graph in C++ using VS CODE//

#include<iostream>
#include<vector>
using namespace std;

vector<int> graph[100];
bool visited[100];

bool detectCycle(int node,int parent)
{
    visited[node]=true;

    for(int next:graph[node])
    {
        if(!visited[next])
        {
            if(detectCycle(next,node))
                return true;
        }
        else if(next!=parent)
        {
            return true;
        }
    }

    return false;
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

    if(detectCycle(0,-1))
        cout<<"\nCycle Detected.";

    else
        cout<<"\nNo Cycle Found.";

    return 0;
}