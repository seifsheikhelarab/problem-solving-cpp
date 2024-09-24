
#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> AdjMat;
map<int, int> Visited;
set<int> nodes;
map<int, int> degree;

int dfs(int u)
{
	int res = 1;
	Visited[u] = 1;
	for (auto v : AdjMat[u])
	{
		if (Visited[v] == 1)
			continue;
		res += dfs(v);
	}
	return res;
}

int main(void)
{

	int t = 1;

	while (true)
	{
		int u, v;
		int edges = 0;
		while (true)
		{
			cin >> u >> v;
			if (u == -1 && v == -1)
				return 0;

			if (u == 0 && v == 0)
				break;

			AdjMat[u].push_back(v);
			degree[v]++;
			edges++;
			nodes.insert(u);
			nodes.insert(v);
		}
		int root = -1;
		for (auto node : nodes)
		{
			if (degree[node] == 0)
				root = node;
		}
		bool tree = true;
		if (nodes.size())
		{

			if (root == -1)
				tree = false;
			else
			{
				int connected = dfs(root);
				tree = connected == nodes.size() && edges == nodes.size() - 1;
			}
		}
		if (tree)
			cout << "Case " << t++ << " is a tree." << endl;
		else
			cout << "Case " << t++ << " is not a tree." << endl;

		degree.clear();
		AdjMat.clear();
		Visited.clear();
		nodes.clear();
	}
}
