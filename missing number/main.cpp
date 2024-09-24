#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x; cin>>n;
    vector<int> b(n+1,0);
    for(int i=1;i<n;i++)
    {
        cin>>x;
        b[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(b.at(i)==0) cout<<i;
    }
}