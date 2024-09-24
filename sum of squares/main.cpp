#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        long long x=n*(n+1)*(2*n+1)/6;
        cout<<x<<"\n";
    }
    return 0;
}