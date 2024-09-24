#include <bits/stdc++.h>
using namespace std; 
#define ll long long
const int N=3005;
string s,t;
int memo[N][N];
bool vis[N][N];

int lcs(int i, int j)
{
    if(i==s.size()) return 0;
    if(j==t.size()) return 0;

    int &ret= memo[i][j];
    if(vis[i][j]) return ret;
    vis[i][j]=1;

    int ch1=-1;
    if(s[i]==t[j]) ch1=1+lcs(i+1,j+1);
    int ch2=lcs(i+1,j);
    int ch3=lcs(i,j+1);

    return ret=max({ch1,ch2,ch3});
}

string ans;

void buildpath(int i,int j)
{
    if(i==s.size()) return;
    if(j==t.size()) return;

    int ret=lcs(i,j);
    int ch1=0;
    if(s[i]==t[j]) ch1=1+lcs(i+1,j+1);
    int ch2=lcs(i+1,j);
    int ch3=lcs(i,j+1);

    if(ret==ch2) buildpath(i+1,j);
    else if(ret==ch3) buildpath(i,j+1);
    else 
    {
        ans+=s[i];
        buildpath(i+1,j+1);
    }
}

int main()
{
    cin>>s>>t;
    buildpath(0,0);
    cout<<ans;
}