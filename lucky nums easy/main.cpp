#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void generate(vector<long long> &super, long long num, int four, int seven) {
    if (num > 1e10) return;
    if (four == seven && num > 0) super.push_back(num);
    generate(super, num * 10 + 4, four + 1, seven);
    generate(super, num * 10 + 7, four, seven + 1);
}

int main() {
    long long n;
    cin >> n;
    vector<long long> super;
    generate(super, 0, 0, 0);
    sort(super.begin(), super.end());
    auto it = lower_bound(super.begin(), super.end(), n);
    cout << *it << endl;
    return 0;
}
