#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll mod=1000000007;
ll p=43;
ll power[100010];

void Calculate_Power()
{
    power[0]=1;
    for(ll i=1;i<=100001;i++)
        power[i]=(power[i-1]*p)%mod;
}

ll GetHash(string s)
{
    ll sz=s.size();
    ll Hash_Value=0;
    for(ll i=0;i<sz;i++)
    {
        Hash_Value+=(((s[i]-'a'+1)*power[i])%mod);
        //Hash_Value+=((s[i]*power[i])%mod);
    }
    return Hash_Value;
}

int main()
{
    Calculate_Power();
    ll n,m;
    cin>>n;
    string s;
    map<ll,bool>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        mp[GetHash(s)]=true;
    }
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>s;
        if(mp[GetHash(s)]==true)cout<<"yes\n";
        else cout<<"no\n";
    }
}
