#include <bits/stdc++.h>
using namespace std;
vector<int> f;
void Divisors(int n) 
{
    for (int i=1; i*i<=n; i++) 
    {
        if (n%i == 0) 
        {
            if (n/i == i) 
            {
                f.push_back(i);
            } 
            else 
            {
                f.push_back(i); f.push_back(n/i);
            }
        }
    }
    sort(f.begin(),f.end());
}
int main() {
    int n; cin>>n;
    bool found=false;
    Divisors(n);
    int i=f.size();
    while(found==false && i>=0)
    {
        if(f[i]==1 || f[i]==6 || f[i]==28 || f[i]==120 || f[i]==496 || f[i]==2016 || f[i]==8128 || f[i]==32640)
        {
            cout<<f[i];
            found=true;
        }
        i--;
    }
}

