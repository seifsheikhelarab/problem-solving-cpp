#include <iostream>
using namespace std;
long long sumOfMultiples(long long n, long long m) {
  if (m == 0) return 0;
  long long k = n / m;
  return m * k * (k + 1) / 2;}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  long long t;
  cin >> t;
  while (t--) {
    long long n, m;
    cin >> n >> m;
    cout << sumOfMultiples(n, m) << "\n";}
  return 0;}
