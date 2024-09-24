#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,n; cin>>q>>n;
    while(q--)
    {
        int op,x; cin>>op;
        switch(op)
        {
            case 1:
            {
                cin>>x;
                n=(n|x);
                break;
            }
             case 2:
            {
                cin>>x;
                n=n&x;
                break;
            }
            case 3:
            {
                cin>>x;
                n=n^x;
                break;
            }
            case 4:
            {
                n=~n;
            }
        }
        cout<<n<<"\n";
    }
}