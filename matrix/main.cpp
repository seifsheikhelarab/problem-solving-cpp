#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[j][i];
        }
    }
    int sm=0,sd=0;
    for(int i=0;i<n;i++)
    {
        sm+=a[i][i];
        sd+=a[i][n-1-i];
        
    }
    cout<<abs(sm-sd);
}