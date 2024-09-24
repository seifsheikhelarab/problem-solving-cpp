#include<bits/stdc++.h>
using namespace std;
const int MAX= 1e5+3;
const int oo= 1e9;
const long long MOD=1e9+7;

int tc = 1;

int n;
vector<int>val,weight;

long long rec (int i, int curW){

    if (i==n) {
        return 0;
    }

    long long ch1 = -oo , ch2 = -oo;

    if(curW>=weight[i])
        ch1 = rec(i+1 , curW-weight[i]) + val[i];

    ch2 = rec(i+1,  curW);

    return max( ch1 , ch2 );

}


void ROOM() {

    int w;

    cin>>n>>w;
    val.resize(n); weight.resize(n);

    for (int i = 0; i < n; ++i) {
        cin>>weight[i]>>val[i];
    }

    cout<<rec( 0 , w );

}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;

    while(  t-- ){
        tc++;

        ROOM();
        if(t)
            cout<<"\n";

    }
    return 0;
}