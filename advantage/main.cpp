#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t; cin>>t;
    int n;
    
    for(int j=0;j<t;j++)
    {
        cin>>n;
        int ori[n],sor[n];
        for(int i=0;i<n;i++)
        {
            cin>>ori[i];
            sor[i]=ori[i];
        }
        sort(sor,sor+n);
        for(int i=0;i<n;i++)
        {
            if(ori[i]!=sor[n-1]) ori[i]=ori[i]-sor[n-1];
            else ori[i]=ori[i]-sor[n-2];
            cout<<ori[i]<<" ";
        }
    }
}