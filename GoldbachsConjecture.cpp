#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ar[1000000];
vector<ll>v;

void sieve()
{
    ar[0]=1;
    ar[1]=1;
    for(ll i=4; i<1000000; i+=2)
        ar[i]=1;
    for(ll i=3; i*i<1000000; i+=2)
    {
        if(ar[i]==0)
        {
            for(ll j=i*i; j<1000000; j+=(2*i))
                ar[j]=1;
        }
    }
    for(ll i=0; i<1000000; i++)
    {
        if(ar[i]==0)v.push_back(i);
    }
}

bool prime_check(ll x)
{
    for(ll i=2; i*i<=x; i++)
    {
        if(x%i==0)return false;
    }
    return true;
}

int main()
{
    ll n;
    sieve();
    ll sz=v.size();
    while(cin>>n && n)
    {
        for(ll i=0; i<sz; i++)
        {
            if(prime_check(n-v[i]))
            {
                printf("%lld = %lld + %lld\n",n,v[i],n-v[i]);
                break;
            }
        }
    }
}
