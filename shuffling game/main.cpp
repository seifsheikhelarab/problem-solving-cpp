#include <iostream>
#include <vector>

using namespace std;

int func(int n, int s, int t, const vector<int>& p) {
    vector<bool> vis(n, false);
    int pos = s;
    int c = 0;

    while (!vis[pos - 1]) {
        vis[pos - 1] = true;
        pos = p[pos - 1];
        c++;

        if (pos == t) {
            return c;
        }
    }

    return -1;
}

int main() {
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    if (s == t) {
        cout << "0";
    } else {
        int res = func(n, s, t, p);
        cout << res;
    }

    return 0;
}
