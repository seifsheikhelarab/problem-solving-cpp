#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
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
    if(prime(n)==true) cout<<"Prime";
    else cout<<"Not Prime";
}