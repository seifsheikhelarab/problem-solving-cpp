#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        long long sq = sqrt(x);
        if(sq*sq == x && isprime(sq)) cout<<"YES\n";
        else cout<<"NO\n";
    }

}