#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,c=0; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            if(a[i+1]!=a[n-i]) c++;
        }
    }
    else
    {
        for(int i=0;i<=n/2;i++)
        {
            if(a[i+1]!=a[n-i]) c++;
        }
    }
    if(c==0) cout<<"YES";
    else cout<<"NO";
}