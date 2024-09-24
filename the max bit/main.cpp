#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = 1;
        while(k <= n) {
            k *= 2;
        }
        cout << (k / 2)-1 << "\n";
    }
    return 0;
}
