#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q; cin>>n>>q;
    long long a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) a[i]+=a[i-1];
    while(q--)
    {
        int x,y; cin>>x>>y;
        cout<<a[n-x+y]-a[n-x]<<"\n";
    }
}