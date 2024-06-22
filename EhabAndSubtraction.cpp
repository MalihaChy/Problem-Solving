#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;
    set<ll>s;
    ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    vector<ll>v;
    set<ll>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        v.push_back(*it);
    ll sz=v.size();
    ll loop_control=min(sz-1,k);
    ll sum=0;
    for(int i=0;i<loop_control;i++)
    {

        cout<<v[i]<<endl;
        v[i]=v[i]+sum;
        v[i+1]=v[i+1]-v[i];
        sum=v[i];
    }
    if(loop_control!=k)
    {
        cout<<v[sz-1]<<endl;
        loop_control=k-sz;
        for(ll i=0;i<loop_control;i++)
            cout<<0<<endl;
    }
}
