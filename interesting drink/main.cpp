#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int q; cin>>q;
    while(q--)
    {
        int d; cin>>d;
        int x = upper_bound(a.begin(),a.end(),d)- a.begin();
        cout<<x<<"\n";
    }
}