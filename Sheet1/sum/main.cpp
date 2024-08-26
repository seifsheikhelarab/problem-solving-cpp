#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n],x[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(a[i]+b[i]==c[i] || b[i]+c[i]==a[i] || a[i]+c[i]==b[i])
        {
            x[i]=1;
        }
        else
        {
            x[i]=0;
        }
        
    }
    for(int i=0;i<n;i++)
        {
            if(x[i]==0) cout<<"NO\n";
            else cout<<"YES\n";
        }
}