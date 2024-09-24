#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    vector<int> links(n+1,0);
    for(int i=1;i<=m;i++)
    {
        int x,y; cin>>x>>y;
        links[x]++; links[y]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<links[i]<<"\n";
    }
}