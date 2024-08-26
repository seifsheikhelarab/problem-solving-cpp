#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n],s=0;
    for(int i=0; i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(a[i]+b[i]+c[i]>1) s++;
    }
    cout<<s;
}
