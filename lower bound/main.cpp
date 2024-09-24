#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q; cin>>n>>q;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<q;i++)
    {
    int st=0,nd=v.size()-1;
    int ans=-1;
    int target;
    cin>>target;
    while(st<=nd)
    {
        int mid=(st+nd)/2;
        if(v[mid]>=target)
        {
            nd=mid-1;
            ans=mid;
        }
        else
        {
            st=mid+1;
        }
    }
    if(ans==-1) cout<<ans<<"\n";
    else cout<<ans+1<<"\n";
    }
}