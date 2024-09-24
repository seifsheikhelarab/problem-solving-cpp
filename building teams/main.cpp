#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> color;
int n;
int bfs(int u)
{
    queue<int> q;
    q.push(u);
    color[u]=1;
    while(!q.empty())
    {
        int c=q.front();
        q.pop();

        for(auto v:adj[c])
        {
            if(!color[v])
        {
            color[v]=3-color[c];
            q.push(v);
        }
        if(color[v]==color[c])
        return 0;
        }
        
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m; cin>>n>>m;

    color.assign(n+1,0);
    adj.assign(n+1,vector<int>());

    for(int i=0;i<m;i++)
    {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++)
    {
        if(color[i]==0)
        {
            if(bfs(i)==0)
            {
                cout<<"IMPOSSIBLE";
                return 0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<color[i]<<" ";
    }
}