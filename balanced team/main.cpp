#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> skills(n);
    for(int i=0; i<n; i++) cin >> skills[i];
    sort(skills.begin(), skills.end());
    int l = 0, r = 0, ans = 0;
    while(r < n) {
        while(skills[r] - skills[l] > 5) {
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans;
}
