#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, q;
    cin >> N >> q;
    vector<int> arr(N);
    for(int i=0; i<N; i++)
        cin >> arr[i];
    while(q--) {
        int l, r, x;
        cin >> l >> r >> x;
        int count = 0;
        for(int i=l-1; i<r; i++) {
            if(arr[i] == x)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
