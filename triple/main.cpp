#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> f(n+1);
        for(int i=0;i<n;i++)
        {
            f[a[i]]++;
        }
        int c=0;
        for(int i=0;i<=n;i++)
        {
            if(f[i]>=3 && c==0) 
            {
                cout<<i<<" ";
                c++;
            }
        }
        if(c==0) cout<<-1;
        cout<<"\n";
    }

}