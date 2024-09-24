#include<bits/stdc++.h>
using namespace std;
const int N=30010;
int n,m,ans;
int fa[N],cnt[N];
int find(int x)
{
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
void merge(int x,int y)
{
    x=find(x),y=find(y);
    if(x!=y) fa[x]=y,cnt[y]+=cnt[x];
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        ans=1;
        for(int i=1;i<=n;i++) fa[i]=i,cnt[i]=1;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            merge(x,y);
        }
        for(int i=1;i<=n;i++) ans=max(ans,cnt[i]);
        cout<<ans<<endl;
    }
    return 0;
}
