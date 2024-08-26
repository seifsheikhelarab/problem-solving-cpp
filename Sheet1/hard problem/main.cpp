#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1>n2) swap(n1,n2);
    if(n2>n3) swap(n2,n3);
    if(n1>n2) swap(n1,n2);
    cout<<n1<<" "<<n2<<" "<<n3;
}