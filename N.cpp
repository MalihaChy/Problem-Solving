#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n,m;

struct edge{
    ll source;
    ll des;
    ll cost;
}e;

vector<edge>v;

bool cmp(edge a, edge b)
{
    return a.cost<b.cost;
}

int par[1000100];

ll Find(ll x)
{
    if(par[x]==x)return x;
    else{
        par[x]=Find(par[x]);
        return par[x];
    }
}

void Union(ll x, ll y)
{
    ll px=Find(x);
    ll py=Find(y);
    par[px]=py;
}

void Kruskal()
{
    for(ll i=0;i<1000100;i++)par[i]=i;
    vector<ll>ans;
    ll x,y,z;
    for(ll i=0;i<m;i++)
    {
        x=v[i].source;
        y=v[i].des;
        z=v[i].cost;
        if(Find(x)!=Find(y))
        {
            ans.push_back(z);
            Union(x,y);
        }
    }
    ll sz=ans.size();
    if(sz==n-1)cout<<ans[sz-1]<<"\n";
    else cout<<"IMPOSSIBLE\n";
}

int main()
{
    ll x,y,z;
    while(1){
        cin>>n>>m;
        v.clear();
        if(n==0&&m==0)return 0;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y>>z;
            e.source=x;
            e.des=y;
            e.cost=z;
            v.push_back(e);
        }
        sort(v.begin(),v.end(),cmp);
        Kruskal();
    }
}
