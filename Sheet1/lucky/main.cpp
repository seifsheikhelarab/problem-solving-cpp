#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int x[n],s1[n],s2[n],sum1[n],sum2[n];
    int n1[n],n2[n],n3[n],m1[n],m2[n],m3[n];
    for(int i=0;i<n;i++)
    {
    cin>>x[i];
    s1[i]=x[i]/1000;
    n1[i]=s1[i]/100;
    n2[i]=s1[i]/10-n1[i]*10;
    n3[i]=s1[i]-n1[i]*100-n2[i]*10;
    s2[i]=x[i]%1000;
    m1[i]=s2[i]/100;
    m2[i]=s2[i]/10-m1[i]*10;
    m3[i]=s2[i]-m1[i]*100-m2[i]*10;
    sum1[i]=n1[i]+n2[i]+n3[i];
    sum2[i]=m1[i]+m2[i]+m3[i];
    }
    for(int i=0;i<n;i++)
    {
        if(sum1[i]==sum2[i]) cout<<"YES\n";
        else cout<<"NO\n";
    }

}