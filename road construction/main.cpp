#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cities, exc;
    cin>>cities>>exc;
    set<int> ex;
    for(int i=0;i<exc;i++)
    {
        int u,v; cin>>u>>v;
        ex.insert(u);
        ex.insert(v);
    }
    cout<<cities-1<<"\n";
    int x=0;
    for(int i=1;i<=cities;i++)
    {
        if(x!=0) break;
        if(ex.find(i) == ex.end())
        x=i;
    }
    for(int i=1;i<=cities;i++)
    {
        if(i!=x)
        {
            cout<<x<<" "<<i<<'\n';
        }
    }
}