#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll mod=1000000007;
ll p=43;
ll power[100010];

ll mod2=1000000003;
ll p2=23;
ll power2[100010];

void Calculate_Power()
{
    power[0]=1;
    for(ll i=1; i<=100001; i++)
        power[i]=(power[i-1]*p)%mod2;
}

void Calculate_Power2()
{
    power2[0]=1;
    for(ll i=1; i<=100001; i++)
        power2[i]=(power2[i-1]*p2)%mod2;
}


ll GetHash(string s)
{
    ll sz=s.size();
    ll Hash_Value=0;
    for(ll i=0; i<sz; i++)
    {
        Hash_Value+=(((s[i]-'a'+1)*power[i])%mod);
        //Hash_Value+=((s[i]*power[i])%mod);
    }
    return Hash_Value;
}

ll GetHash2(string s)
{
    ll sz=s.size();
    ll Hash_Value=0;
    for(ll i=0; i<sz; i++)
    {
        Hash_Value+=(((s[i]-'a'+1)*power2[i])%mod2);
        //Hash_Value+=((s[i]*power[i])%mod);
    }
    return Hash_Value;
}


int main()
{
    Calculate_Power();
    Calculate_Power2();
    ll n,m,h1,h2;
    cin>>n;
    string s;
    map< ll,pair<ll,ll> >mp;
    for(ll i=0; i<n; i++)
    {
        cin>>s;
        h1=GetHash(s);
        h2=GetHash2(s);
        mp[h1]=make_pair(h1,h2);
    }
    cin>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>s;
        h1=GetHash(s);
        h2=GetHash2(s);
        if(mp[h1].first==h1&&mp[h1].second==h2)cout<<"yes\n";
        else cout<<"no\n";
    }
}

