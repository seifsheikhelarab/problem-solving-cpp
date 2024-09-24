#include <iostream>
using namespace std;
const int N = 10;
int n;
int rtc[N];
bool vc[N], dr[2*N+1], dl[2*N+1];

void pb(){
    for(int r = 0; r < n; r++){
        for(int c = 0; c < n; c++){
            if(rtc[r] == c) cout << "Q";
            else cout << ".";
        }
        cout << "\n";
    }
}

void queen(int r){
    if(r == n){
        pb();
        cout << "\n";
        return;
    }

    for(int c = 0; c < n; c++){
        if(!vc[c] && !dr[c+r] && !dl[N + c-r]){
            rtc[r] = c;
            vc[c] = dr[c+r] = dl[N + c - r] = 1;
            queen(r + 1);
            vc[c] = dr[c+r] = dl[N + c - r] = 0;
        }
    }
}
int main() {
    cin >> n;
    queen(0);

}