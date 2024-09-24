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
    int n; cin>>n;
    vector<int> prime;
    vector<int> mam(n+1);
    for(int i=2;i<=n;i++)
    {
        if(pc(i)) prime.push_back(i);
    }
    for(int i=3;i<=n;i++)
    {
        for(int j=0;j<prime.size();j++)
        {
            if(i%prime[j]==0) mam[i]++;
        }
    }
    int c=0;
    for(int i =0;i<mam.size();i++)
    {
        if(mam[i]==2) c++;
    }
    cout<<c;
}