#include <bits/stdc++.h>
using namespace std;
bool Divisors(long long n) 
{
    vector<long long> f;
    for (long long i=3; i*i<=n; i++) 
    {
        if (n%i == 0) 
        {
            if (n/i == i) 
            {
                if(i%2!=0) f.push_back(i);
            } 
            else 
            {
                if(i%2!=0) f.push_back(i);if(i%2!=0) f.push_back(n/i);
            }
        }
    }
    if(f.empty()) return false;
    else return true;
}
int main() {

    int t; cin>>t;
    while(t--)
    {
    long long n; cin>>n;
    if(Divisors(n)) cout<<"YES\n";
    else cout<<"NO\n";
    }
    
}

