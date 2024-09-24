#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

int dp[MAXN];

int ICPC_Mansoura(int num) {
    if (num <= 0) return 1;

    if (dp[num] != -1) {
        return dp[num];
    }

    int ans = (ICPC_Mansoura(num - 1) + ICPC_Mansoura(num - 3)) % MOD;
    dp[num] = (ans + 1) % MOD;

    return dp[num];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << ICPC_Mansoura(n) << "\n";
    }

    return 0;
}
