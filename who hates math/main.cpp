#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin >> n >> a;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (a % i == 0 && a / i <= n) {
            count++;
        }
    }
    cout << count;
}
