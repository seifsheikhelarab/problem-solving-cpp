#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    //initializing values
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    //input values
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        b[i]=0;
        for(int j=1;j<=n;j++)
        {
            if(a[j]==i) b[i]++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<b[i]<<"\n";
    }
}