#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(r1<l2) cout<<"-1";
    else cout<<l2<<" "<<r1;
}