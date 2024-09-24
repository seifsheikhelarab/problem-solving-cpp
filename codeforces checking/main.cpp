#include <cstring>
#include <cctype>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string c="codeforces";
    cin>>n;
    char x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c.find(x[i])!=string::npos) cout<<"YES\n";
        else cout<<"NO\n";
    }


}