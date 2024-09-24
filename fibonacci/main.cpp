#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long fib[51];
    fib[1]=0;
    fib[2]=1;
    for(int n=3;n<51;n++)
    {
        fib[n]=fib[n-1]+fib[n-2];
    }
    int n; cin>>n;
    cout<<fib[n];
}

