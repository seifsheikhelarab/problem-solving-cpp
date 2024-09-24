#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin>>n;
    long long s = sqrt(n);
    long long z = s*s;
    if(z==n) cout<<"YES";
    else cout<<"NO";
}