#include<bits/stdc++.h>
using namespace std;
int n;
void s(int n)
{
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    s(n-1);
    cout<<n<<" ";
    s(n-1);

}
int main()
{
    cin>>n;
    s(n);
}