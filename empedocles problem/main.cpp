#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> elements(n);
    for(int i = 0; i < n; i++) {
        string a, b, c, d;
        cin >> a >> b >> c >> d;
        elements[i] = a + b + c + d;
    }
    string firstElement = elements[0];
    for(int i = 1; i < n; i++) {
        if(elements[i] != firstElement) {
            cout << "you were right" << endl;
            return 0;
        }
    }
    cout << "Empedocles was right" << endl;
    return 0;
}
