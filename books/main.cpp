#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int l = 0, r = 0, sum = 0, ms = 0;
    while(r < n) {
        while(r < n && sum + a[r] <= t) {
            sum += a[r];
            r++;
        }
        ms = max(ms, r - l);
        sum -= a[l];
        l++;
    }
    cout << ms <<"\n";
}
