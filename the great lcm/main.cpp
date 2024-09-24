#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> findXY(long long A) {
    long long X = sqrt(A);
    while (A % X != 0 || __gcd(X, A/X) != 1) X--;
    long long Y = A / X;
    return make_pair(X, Y);
}

int main() {
    long long A;
    cin >> A;
    pair<long long, long long> result = findXY(A);
    cout << result.first << " " << result.second << endl;
    return 0;
}
