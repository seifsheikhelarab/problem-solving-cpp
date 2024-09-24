#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
int counter = 0;
vector<int>vis;
vector<int>balls;
void dfs(int u)
{
    if(vis[u]!=1)
    {
    vis[u]=1;
    for(auto v:a[u])
    {
        dfs(v);
    }
    }
}
int main()
{
    int cities, roads;
    cin>>cities>>roads;
    a.resize(cities+1);
    vis.resize(cities+1);
    for(int i=0;i<roads;i++)
    {
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
    for(int i=1;i<=cities;i++)
    {
        if(vis[i]!=1)
        {
            counter++;
            balls.push_back(i);
            dfs(i);
        }
    }
    cout<<counter<<"\n";
    for(int i=0;i<balls.size();i++)
    {
        cout<<1<<" "<<balls[i]<<"\n";
    }
}