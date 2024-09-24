#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    long long int n; cin>>n;
    vector<long long int> f;
    for(long long int x=2;x*x<=n;x++)
    {
        while(n%x==0)
        {
            f.push_back(x);
            n/=x;
        }
    }
    if(n>1) f.push_back(n);
    cout<<f[0]<<"\n";
    for(long long int i=1;i<f.size();i++)
    {
        if(f[i]!=f[i-1]) cout<<f[i]<<"\n";
    }
}