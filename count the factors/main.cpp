#include<bits/stdc++.h>
using namespace std;
bool pc(int n)
{
    if(n<2) return false;
    for(int x=2;x*x<=n;x++)
    {
        if(n%x==0) return false;
    }
    return true;
}
int main()
{
    int x=1;
    vector<int> primes;
    for(int i=2;i<1000000;i++)
    {
        if(pc(i)) primes.push_back(i);
    }
    while(x!=0)
    {
        int n,c=0; cin>>n;
        if(n==0) 
        {break; x=1;}
        else{
            for(int i=0;i<primes.size();i++){
                if(n%primes[i]==0) c++;
            }
            cout<<n<<" : "<<c<<"\n";
        }
        
    }
}