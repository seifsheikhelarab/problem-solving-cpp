#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,sum=0; cin>>n;
    long long a[n+1],s[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=a[i];
    }
    sort(s+1,s+n+1);
    long long l,r;
    int m,type;cin>>m;
    for(int i=0;i<m;i++)
    {
        sum=0;
        cin>>type>>l>>r;
        switch (type)
        {
        case 1:
            for(int j=l;j<=r;j++)
            {
                sum=sum+a[j];
            }
            break;
        
        case 2:
        for(int j=l;j<=r;j++)
            {
                sum=sum+s[j];
            }
            break;
        }
        cout<<sum<<"\n";
    }
}