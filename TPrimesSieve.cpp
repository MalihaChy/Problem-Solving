#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll ar[1000010];

void sieve()
{
    ar[0]=1;
    ar[1]=1;
    for(ll i=4;i<1000010;i+=2)ar[i]=1;
    for(ll i=3;i*i<1000010;i+=2){
        if(ar[i]==0){
            for(ll j=i*i;j<1000010;j+=(2*i))ar[j]=1;
        }
    }
}

int main()
{
    ll n;
    ll x;
    ll r;
    sieve();
    cin>>n;
    while(n--)
    {
        cin>>x;
        r=sqrt(x);
        if(r*r==x){
            if(ar[r]==0)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}
