#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll prime_factorization(ll n)
{
    ll x=0,y=0;
    while(n%2==0)
    {
        x++;
        n=n/2;
    }
    //ll loop=sqrt(n);
    y=x+1;
    x=0;
    for(ll i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            x++;
            n=n/i;
        }
        y=y*(x+1);
        x=0;
    }
    if(n>1)y=y*2;
    return y-1;
}

int main()
{
    ll t,n;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n;
        printf("Case %lld: %lld\n",i,prime_factorization(n));
    }

}
