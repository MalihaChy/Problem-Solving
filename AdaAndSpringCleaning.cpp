#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll Count_Unique_Substrings(string s,ll k)
{
    ll n=s.size();
    ll p=31;
    ll m=1000000009;
    ll p_pow[n];
    p_pow[0]=1;
    for(ll i=1;i<n;i++)
        p_pow[i]=(p_pow[i-1]*p)%m;
    ll h[n+1];
    memset(h,0,sizeof(h));
    for(ll i=0;i<n;i++)
        h[i+1]=(h[i]+(s[i]-'a'+1)*p_pow[i])%m;

    p=53;
    m=1000000007;
    ll p_pow2[n];
    p_pow2[0]=1;
    for(ll i=1;i<n;i++)
        p_pow2[i]=(p_pow2[i-1]*p)%m;
    ll h2[n+1];
    memset(h2,0,sizeof(h2));
    for(ll i=0;i<n;i++)
        h2[i+1]=(h2[i]+(s[i]-'a'+1)*p_pow2[i])%m;

    set<ll>st;
    ll x=n-k;
    for(ll i=0;i<=x;i++)
    {
        ll cur_h=(h[i+k]+m-h[i])%m;
        cur_h=(cur_h*p_pow[n-i-1])%m;
        st.insert(cur_h);
        cur_h=(h2[i+k]+m-h2[i])%m;
        cur_h=(cur_h*p_pow2[n-i-1])%m;
        st.insert(cur_h);
    }
    return st.size();
}

int main()
{
    ll t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        cout<<Count_Unique_Substrings(s,k)<<endl;
    }
}
