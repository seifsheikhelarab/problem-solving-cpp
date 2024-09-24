#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> dist;
int nodes;
vector<vector<int>> adj;
void bfs()
{
    priority_queue<int> q;
    for(int i=1;i<=nodes;i++)
    {
        if(dist[i]==0)
        q.push(-i);
    }
    vector<int> sort; 
    while (!q.empty())
    {
        int curr = -q.top();
        q.pop();
        sort.push_back(curr);
        for(auto v : adj[curr])
        {
            dist[v]--;
            if(dist[v]==0) q.push(-v);
        }
    }
    if(sort.size()==nodes)
    {
        for(int u=0;u<sort.size();u++) cout<<sort[u]<<" ";
    }
    else cout<<"Sandro fails.";
}
int main()
{
    int edges;
    cin>>nodes>>edges;
    adj.assign(nodes+1,vector<int>());
    dist.assign(nodes+1,0);
    for(int i=0;i<edges;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        dist[v]++;
    }
    bfs();
}
