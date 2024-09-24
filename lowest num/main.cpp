#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int low=a[0],lowp=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<low)
        {
            low=a[i];
            lowp=i;
        }
    }
    cout<<low<<" "<<lowp+1;
}