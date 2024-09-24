#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int q; cin>>q;
    for(int i=1;i<n;i++) a[i]=a[i]+a[i-1];
    while(q--)
    {
        int x; cin>>x;
        cout<<lower_bound(a.begin(),a.end(),x) - a.begin() +1<<"\n";
    }
}