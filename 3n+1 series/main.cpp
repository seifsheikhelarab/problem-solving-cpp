
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int get_length(int n){
    if(n == 1) return 1;
    else if(n % 2) return (1 + get_length(3 * n + 1));
    else return (1 + get_length(n / 2));
}


int main() {
    int n;
    cin >> n;
    cout << get_length(n);
}