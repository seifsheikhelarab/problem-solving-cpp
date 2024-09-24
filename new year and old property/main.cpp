#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    ll l, r;
    cin >> l >> r;
 
    ll ans = 0;
    for(int m = 2; m < 61 ; m++){
        if((1LL << m - 1) > r)
            break;
 
        ll num = (1LL <<  m) - 1;
        for(int i = 0; i < m-1; i++){
            ll x = (num & ~(1LL << i));
 
            if(x >= l && x <= r)
                ans++;
        }
    }
 
    cout << ans << "\n";
 
    return 0;
}