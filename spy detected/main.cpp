#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    vector<int> nums(n,0);
    vector<int> b(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
        b[i]=nums[i];

    }
    int target;
    sort(b.begin(),b.end());
    if(b[0]!=b[1]) target=b[0];
    if(b[n-1]!=b[n-2]) target=b[n-1];
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target) cout<<i+1<<"\n";
    }
    }

}