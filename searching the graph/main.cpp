#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> vis;
int r=0;
vector<vector<int>> adj;
void dfs(int u)
{
    if(vis[u]!=1)
    {
    cout<<u<<" ";
    vis[u]=1;
    for(auto v:adj[u])
    {
        dfs(v);
    }
    }
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vis[u] = 1;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        cout << curr << " ";

        for(auto v : adj[curr])
        {
            if(!vis[v])
            {
                vis[v] = 1;
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
    int t; cin>>t;
    while(t--)
    {   
        r++;
        int n; cin >> n;
    adj.assign(n + 1, vector<int>());
    vis.assign(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        int u, m; cin >> u >> m;
        for (int j = 0; j < m; ++j) {
            int v; cin >> v;
            adj[u].push_back(v);
        }
    }
    int u, i;
    cout<<"graph "<<r<<"\n";
    while (1)
    {
        cin >> u >> i;
        if(!u && !i)
            break;

        vis.assign(n + 1, 0);
        if(i)
        {
            bfs(u);
        }
        else
        {
            dfs(u);
        }
        cout << endl;
    }

    }
}