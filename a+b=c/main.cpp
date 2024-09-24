#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    char l = 'A';
    for (char d : s) 
    {
        if (l == d) 
        {
            cnt++;
            ans = max(ans, cnt);
        } 
        else 
        {
            l = d;
            cnt = 1;
        }
    }
    cout<<ans;
}
