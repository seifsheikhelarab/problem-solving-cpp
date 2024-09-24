#include <bits/stdc++.h>
using namespace std;
#define ll long long
int bfs(int n,int m)
{
    queue<pair<int,int>> q;
    q.push({n,0});

    map<int,bool> vis;
    vis[n]=1;
    
    while(!q.empty())
    {
        int u = q.front().first;
        int dist = q.front().second;
        q.pop();
        
        if(u==m) return dist;
        if(!vis.count(u-1) && u-1>=1)
        {
            q.push({u-1,dist+1});
            vis[u-1]=1;
        }
        if(!vis.count(2*u) && 2*u<=2*m)
        {
            q.push({2*u,dist+1});
            vis[u*2]=1;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<bfs(n,m);
}
