#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,x=0;
    cin>>n>>h;
    int a[n],w[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h) w[i]=2;
        else w[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        x=x+w[i];
    }
    cout<<x;
}