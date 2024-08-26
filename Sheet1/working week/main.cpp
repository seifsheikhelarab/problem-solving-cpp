#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        x[i]=x[i]/3 - 2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\n";
    }
}