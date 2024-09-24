#include <iostream>
#include <vector>
using namespace std;

vector<int> sum_of_divisors(500001);

void precompute() {
    for (int i = 1; i <= 500000; ++i) {
        for (int j = 2 * i; j <= 500000; j += i) {
            sum_of_divisors[j] += i;
        }
    }
}

int main() {
    precompute();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << sum_of_divisors[n] << endl;
    }
    return 0;
}
