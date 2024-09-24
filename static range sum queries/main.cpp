#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q; cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long s[n];
    s[0]=a[0];
    for(int i=1;i<n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
    for(int i=0;i<q;i++)
    {
        int l,r; cin>>l>>r;
        l--; r--;
        if(l==0) cout<<s[r]<<"\n";
        else
        cout<<s[r]-s[l-1]<<"\n";
    }
}