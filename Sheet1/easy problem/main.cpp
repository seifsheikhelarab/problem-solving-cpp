#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=13;i<=n;i++)
    {
        if(i%13==0&&isprime(i))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
