#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1,0);
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        a[x]++; a[y]++;
    }
    int is1=0, is2=0, isn_1=0,isElse=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1) is1++;
        else if(a[i]==2) is2++;
        else if(a[i]==n-1) isn_1++;
        else isElse++;
    }
    if(is1 && is2 && !isn_1 && !isElse) cout<<"bus topology";
    else if(is2==n && !is1 && !isn_1 && !isElse) cout<<"ring topology";
    else if(is1==n-1 && isn_1==1 && !is2 && !isElse) cout<<"star topology";
    else cout<<"unknown topology";
}