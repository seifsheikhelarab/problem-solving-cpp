#include<bits/stdc++.h>
using namespace std;

bool check(long long mid, long long k, vector<long long> a, vector<long long> b) {
    long long n = a.size();
    for(int i = 0; i < n; i++) {
        if(a[i]*mid > b[i]) {
            if(a[i]*mid - b[i] > k) return false;
            else k -= a[i]*mid - b[i];
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    long long l = 0, r = 2e9;
    while(r - l > 1) {
        long long mid = (l + r) / 2;
        if(check(mid, k, a, b)) l = mid;
        else r = mid;
    }
    if(l==1999999999) cout<<l+1<<"\n";
    else cout << l << "\n";
    return 0;
}
