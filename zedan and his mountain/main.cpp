#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int tries=0;
    vector<int> m;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1) 
        {
            tries++;
            if(i!=0) m.push_back(a[i-1]);
        }
        if(i==n-1) m.push_back(a[i]);
        
    }
    cout<<tries<<"\n";
        for(int i=0;i<m.size();i++)
        {
            cout<<m[i]<<" ";
        }
}