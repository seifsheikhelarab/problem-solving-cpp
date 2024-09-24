#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,q; cin>>n>>q;


    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> pxor(n);
    pxor[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pxor[i]=pxor[i-1]^a[i];
    }
    while(q--)
    {
        int l,r; cin>>l>>r;
        l--; r--;
        if(l == 0)
            cout << pxor[r] << "\n";
        else
            cout << (pxor[r]^pxor[l-1]) << "\n";
    }
}