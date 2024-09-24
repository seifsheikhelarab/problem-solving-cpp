#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int q; cin>>q;
    int l,r,sum; 
    for(int j=0;j<q;j++)
    {
        cin>>l>>r;
        sum=0;
    for(int i=l;i<=r;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum<<"\n";
    }
}