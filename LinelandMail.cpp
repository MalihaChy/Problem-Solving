#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
        cin>>ar[i];
    vector< pair<ll,ll> >v;
    ll b=abs(ar[n-1]-ar[0]);
    ll s=abs(ar[1]-ar[0]);
    v.push_back(make_pair(s,b));
    ll p=n-1;
    for(ll i=1;i<p;i++)
    {
        s=min(abs(ar[i]-ar[i-1]),abs(ar[i+1]-ar[i]));
        b=max(abs(ar[i]-ar[0]),abs(ar[p]-ar[i]));
        v.push_back(make_pair(s,b));
    }
    b=abs(ar[n-1]-ar[0]);
    s=abs(ar[n-1]-ar[n-2]);
    v.push_back(make_pair(s,b));
    for(ll i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
