#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> adj;
vector<ll> color;
ll nodes;
void bfs(ll u)
{
    queue<ll> q;
    q.push(u);
    color[u]=1;
    while(!q.empty())
    {
        ll curr=q.front();
        q.pop();
        for(auto v:adj[curr])
        {
            if(color[v]==0)
            {
            color[v]=3-color[curr];
            q.push(v);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>nodes;
    adj.assign(nodes+1,vector<ll>());
    color.assign(nodes+1,0);
    for(int i=0;i<nodes-1;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    ll c1=0,c2=0;
    for(int i=1;i<=nodes;i++)
    {
        if(color[i]==1) c1++;
        else if(color[i]==2) c2++;
    }
    cout<<c1*c2-(nodes-1)<<"\n";
}