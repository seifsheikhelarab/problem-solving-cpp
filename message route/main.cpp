#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> parent;
vector<int> dist;
vector<vector<int>> adj;
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    dist[u]=0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        for(auto v : adj[curr])
        {
            if(dist[v]==-1)
            {
                dist[v] = dist[curr]++;
                parent[v]=curr;
                q.push(v);
            }
        }
    }
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    adj.assign(nodes+1,vector<int>());
    parent.assign(nodes+1,-1);
    dist.assign(nodes+1,-1);
    for(int i=0;i<edges;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    int z;
    if(dist[nodes]==-1)
    {
        cout<<"IMPOSSIBLE";
    }
    else
    {
        stack<int> ansmans;
        ansmans.push(nodes);
        int z=nodes;
        while(parent[z]!=-1)
        {
            z=parent[z];
            ansmans.push(z);
        }
        cout<<ansmans.size()<<"\n";
        while(!ansmans.empty())
        {
            cout<<ansmans.top()<<" ";
            ansmans.pop();
        }
    }
}
