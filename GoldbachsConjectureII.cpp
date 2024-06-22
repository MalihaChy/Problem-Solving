#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ar[35000];
vector<ll>v;

void sieve()
{
    ar[0]=1;
    ar[1]=1;
    for(ll i=4;i<35000;i+=2)ar[i]=1;
    for(ll i=3;i*i<35000;i+=2){
        if(ar[i]==0){
            for(ll j=i*i;j<35000;j+=(2*i))
                ar[j]=1;
        }
    }
    for(ll i=0;i<35000;i++)
    {
        if(ar[i]==0)v.push_back(i);
    }
}

int main()
{
    ll n;
    sieve();
    while(cin>>n && n)
    {
        ll ans=0;
        ll sz=v.size();
        for(ll i=0;i<sz;i++){
            ll x=n-v[i];
            if(x>=0&&x>=v[i]){
                if(ar[x]==0)ans++;
            }
        }
        cout<<ans<<endl;
    }
}
