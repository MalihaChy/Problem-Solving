#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll bigmod(ll a,ll p,ll M)
{
    if(p==0)
        return 1;
    if(p&1)
    {
        ll x= bigmod(a,p-1,M);
        return ((a%M)*(x%M))%M;
    }
    else
    {
        ll x= bigmod(a,p/2,M);
        return ((x%M)*(x%M))%M;
    }
}

int main()
{
    ll a,p,M;
    while(1)
    {
        cin>>a>>p>>M;
        cout<<bigmod(a,p,M)<<endl;
    }
}
