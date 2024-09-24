#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> adj;
vector<int> cost;
vector<bool> vis;

int main() {
    int n, m;
    cin >> n >> m;
    adj.assign(n+1,vector<int>());
    cost.assign(n+1,0);
    vis.assign(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin >> cost[i];
    }
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            int minCost = cost[i];
            queue<int> q;
            q.push(i);
            vis[i] = true;
            while(!q.empty()) {
                int node = q.front();
                q.pop();
                for(int x : adj[node]) {
                    if(!vis[x]) {
                        q.push(x);
                        vis[x] = true;
                        minCost = min(minCost, cost[x]);
                    }
                }
            }
            ans += minCost;
        }
    }
    cout << ans << endl;
    return 0;
}
