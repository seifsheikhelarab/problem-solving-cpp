#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        int min_val = *min_element(a.begin(), a.end());
        long long ans = 0;
        for(int i=0; i<n; i++) ans += a[i] - min_val;
        cout << ans << "\n";
    }
    return 0;
}
