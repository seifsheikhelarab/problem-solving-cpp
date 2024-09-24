#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t],b[t],c[t],d[t],cnt[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        cnt[i]=0;
    }
    for (int i = 0; i < t; i++)
    {
        if (b[i]>a[i]) cnt[i]++;
        if (c[i]>a[i]) cnt[i]++;
        if (d[i]>a[i]) cnt[i]++;
    }
    for (int i = 0; i < t; i++)
    {
        cout<<cnt[i]<<"\n";
    }
}