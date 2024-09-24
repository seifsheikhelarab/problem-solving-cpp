#include <iostream>
#define ll long long
#define M 1000000007
using namespace std;
ll fp(ll x, ll n)
{
    if(not n)
    return 1;
    ll p=fp(x,n/2);
    if(n&1)
    {
        return ((x%M)*(p%M)%M*(p%M))%M;
    }
    else
    {
        return ((p%M)*(p%M))%M;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,m; cin>>n>>m;
    cout<<fp(n,m);
}