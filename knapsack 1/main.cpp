#include <bits/stdc++.h>
using namespace std; 
#define ll long long

int n, max_w;
const int N = 105, W=1e5+5;
int val[N], weight[N];
ll memo[N][W];
bool visited[N][W];

ll f(int i, int rem)
{
    if(i==n) return 0;
    ll &ret=memo[i][rem];
    if(visited[i][rem]) return ret;
    visited[i][rem]=1;

    ll ch1=f(i+1,rem);
    ll ch2=0;
    if(rem>=weight[i])
        ch2=val[i]+f(i+1,rem-weight[i]);

    return ret=max(ch1,ch2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>max_w;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>val[i];
    }
    cout<<f(0,max_w);
}