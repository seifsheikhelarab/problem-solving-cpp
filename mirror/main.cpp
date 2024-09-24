#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n/2;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=n/2;i>0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=n;i>n/2;i--)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=n/2+1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
