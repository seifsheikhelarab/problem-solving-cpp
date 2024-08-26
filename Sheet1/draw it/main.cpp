#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char S;
    int n;
    cin>>S>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int b=0;b<a[i];b++)
        {
            cout<<S;
        }
        cout<<"\n";
    }
}