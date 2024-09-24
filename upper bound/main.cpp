#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q; cin>>n>>q;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(int i=0;i<q;i++)
    {
    int start=0,end=nums.size()-1,target;
    cin>>target;
    int index=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid]>target)
        {
            index=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    if(index==-1) cout<<index<<"\n";
    else cout<<index+1<<"\n";
    }
}