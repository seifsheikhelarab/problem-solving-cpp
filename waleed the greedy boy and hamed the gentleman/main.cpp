#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> t[i];
    }

    int waleed = 0, hamed = 0;
    int left = 0, right = n - 1;
    int time_waleed = 0, time_hamed = 0;

    while (left <= right) {
        if (time_waleed <= time_hamed) {
            time_waleed += t[left++];
            waleed++;
        } else {
            time_hamed += t[right--];
            hamed++;
        }
    }

    cout << waleed << " " << hamed << endl;

    return 0;
}
