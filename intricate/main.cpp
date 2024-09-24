#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long a,b; cin>>a>>b;
    vector<long long> f;
    long long fact=1;
    f.push_back(1);
    f.push_back(1);
    if(a<b) swap(a,b);
    for(long long i=2;i<=b;i++)
    {
        fact*=i;
        f.push_back(fact);
    }
    cout<<f[b];
}