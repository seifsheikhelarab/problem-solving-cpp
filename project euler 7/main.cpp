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
    int n=0,c=0;
    vector<int> p;
    p.push_back(-1);
    while(c<=10000)
    {
        if(pc(n))
        { 
            p.push_back(n);
            c++;
        }
        n++;
    }
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        cout<<p[x]<<"\n";
    }
}