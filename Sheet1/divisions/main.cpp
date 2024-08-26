#include <algorithm>
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
    for(int i=0;i<n;i++)
    {
        if (a[i]>=1900)
        {
            cout<<"Division 1\n";
        }
        else if(a[i]>=1600)
        {
            cout<<"Division 2\n";
        }
        else if (a[i]>=1400)
        {
            cout<<"Division 3\n";
        }
        else
        {
            cout<<"Division 4\n";
        }
    }        
}
    
    