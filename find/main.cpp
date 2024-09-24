#include <iostream>
using namespace std;

int main()
{
    int n,x,c=-1;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    while (i<n && c==-1)
    {
        if(a[i]==x) c=i;
        i++;
    }
    if(c==-1) cout<<"Not Found";
    else cout<<c;
    
}