#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=0,c=0;
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[j][i];
            if(a[j][i]==1)
            {
                r=j; c=i;
            }
        }
    }
    r++; c++;
    r=abs(3-r);
    c=abs(3-c);
    cout<<r+c;
}