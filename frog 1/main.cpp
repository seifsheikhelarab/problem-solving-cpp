#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> h(n + 1, 0);
    for(int i = 1; i <= n; i++)
        cin >> h[i];

    vector <int> ans(n + 1);
    ans[2] = abs(h[2] - h[1]);
    for(int i = 3; i <= n; i++)
        ans[i] = min(ans[i - 1] + abs(h[i] - h[i - 1]),
        ans[i - 2] + abs(h[i] - h[i - 2]));

    cout << ans[n];
    return 0;
}