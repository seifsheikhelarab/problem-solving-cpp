#include<bits/stdc++.h>
using namespace std;
bool pc(int n)
{
    if(n<2) return false;
    for(int x=2;x*x<=n;x++)
    {
        if(n%x==0) return false;
    }
    return true;
}
int main()
{
    int n,k; cin>>n>>k;
    vector<int> v;
    for(int i=2;i<1000;i++)
    {
        if(pc(i)) v.push_back(i);
    }
    int nold=0,counter=0,i=1;
    while(nold<=n)
    {
        nold=v[i-1]+v[i]+1;
        if(pc(nold)) counter++;
        i++;
    }
    if(counter>=k) cout<<"YES";
    else cout<<"NO";
}