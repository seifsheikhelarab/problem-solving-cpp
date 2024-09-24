#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> visited;
vector<int> result;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
    result.push_back(v);
}

int main() {
    int n, m;
    while (cin >> n >> m && (n || m)) {
        for(int i = 0; i < n; i++) adj[i].clear();
        result.clear();
        visited.assign(n, false);

        for(int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            x--; y--;
            adj[x].push_back(y);
        }

        for(int i = 0; i < n; i++)
            if (!visited[i])
                dfs(i);

        reverse(result.begin(), result.end());
        for(int i = 0; i < n; i++) {
            if(i) cout << " ";
            cout << result[i]+1;
        }
        cout << "\n";
    }
    return 0;
}
