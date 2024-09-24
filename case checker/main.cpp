#include <cstring>
#include <cctype>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string x;
    cin>>n>>x;
    int c[n];
    for(int i=0;i<n;i++)
    {
        if(isupper(x[i])) c[i]=0;
        else if(islower(x[i])) c[i]=1;
        else if(isdigit(x[i])) c[i]=2;
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]==0) cout<<"is upper\n";
        if(c[i]==1) cout<<"is lower\n";
        if(c[i]==2) cout<<"is digit\n";
    }

}