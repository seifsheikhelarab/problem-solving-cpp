#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int x=n*n;
    if(x%2==0)
    {
        cout<<x/2<<"\n";
        int x=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++)
            {
                if(x%2==0)
                {
                    cout<<"C";
                    x++;
                }
                else
                {
                    cout<<".";
                    x++;
                }
            }
            x++;
            cout<<"\n";
            }
    }
        else
        {
            cout<<(x/2)+1<<"\n";
            int x=0;
            for(int j=0;j<n;j++){
            for(int i=0;i<n;i++)
            {
                if(x==0)
                {
                    cout<<"C";
                    x=1;
                }
                else if(x==1)
                {
                    cout<<".";
                    x=0;
                }
            }
            cout<<"\n";
            }
        }
}