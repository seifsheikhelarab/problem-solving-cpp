#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a=1378,b;
    cin>>b;
    if(b==0) 
        cout<<1;
    else if(b%4==1)
        cout<<8;
    else if(b%4==2)
        cout<<4;
    else if(b%4==3)
        cout<<2;
    else
        cout<<6;
    return 0;
}
