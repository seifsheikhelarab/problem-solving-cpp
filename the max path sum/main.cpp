#include <iostream>
#define ll long long
using namespace std;
const int N = 10, M = 10;
int n, m;
int a[N][M];
bool v(int i, int j){
    if(i >= 0 && i < n && j >= 0 && j < m) return true;
    return false;
}
int mxsm(int i, int j){
    if(!v(i, j)) return -1e9;

    if(i == n-1 && j == m-1){
        return a[i][j];
    }
    int ch1 = mxsm(i+1, j);
    int ch2 = mxsm(i, j+1);
    return a[i][j] + max(ch1, ch2);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cout << mxsm(0, 0);
}
