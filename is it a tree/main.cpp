#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int n,m,fa[N];
int find(int x){return fa[x]==x?x:fa[x]=find(fa[x]);}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++){
        int u,v;scanf("%d%d",&u,&v);
        int x=find(u),y=find(v);
        if(x==y)return puts("NO"),0;
        fa[x]=y;
    }
    for(int i=2;i<=n;i++)if(find(i)!=find(1))return puts("NO"),0;
    puts("YES");
    return 0;
}
