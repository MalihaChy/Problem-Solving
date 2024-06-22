#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll m,x,big=0;
    vector<ll>v[n];
    for(ll i=0;i<n;i++)
    {
        cin>>m;
        for(ll j=0;j<m;j++)
        {
            cin>>x;
            v[i].push_back(x);
        }
        sort(v[i].begin(),v[i].end());
        if(v[i][m-1]>big)big=v[i][m-1];
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll sz=v[i].size();
        ans+=((big-v[i][sz-1])*sz);
    }
    cout<<ans<<endl;
}
