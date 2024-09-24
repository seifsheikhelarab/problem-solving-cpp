#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x,max1,max2,q,w,e,n;
    cin >>a>>b>>c;
    if(a>=1 && a<=100 && b>=1 && b<=100 && b>=1 && b<=100)
    {
    x=max(a,b);
    max1=max(x,c);
    max2=max1+1;
    n=0;
    q=a+b;
    w=b+c;
    e=a+c;
    while(q<=c)
    {
        q=q+1;
        n=n+1;
    }
    while(w<=a)
    {
        w=w+1;
        n=n+1;
    }
    while(e<=b)
    {
        e=e+1;
        n=n+1;
    }
    cout<<n;
    }
}
