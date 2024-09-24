#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k; cin>>k;
    while(k--)
    {
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0, r=n-1;
    int s1=0,s2=0,b=0;
    vector<int> v(1,0);
    while(l<=r)
    {
        if(s1 <= s2) {
            s1 += a[l++];
        } else {
            s2 += a[r--];
        }
        b++;
        if(s1 == s2) {
            v.push_back(b);
        }
    }
    cout<<v.back()<<"\n";
    
    }
}
