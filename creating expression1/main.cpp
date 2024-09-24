#include <iostream>
#define ll long long
using namespace std;
const int N = 20;
int n, x;
int a[N];
bool fun(int i, int sum){
    if(i == n) return sum == x;
    return fun(i+1, sum + a[i]) || fun(i+1, sum - a[i]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);  
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];
    if(fun(1, a[0])) cout << "YES";
    else cout << "NO";
}