#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct edge
{
    ll source;
    ll des;
    ll cost;
} e;

vector<edge>v;
vector<int>ans;

bool cmp(edge a, edge b)
{
    return a.cost<b.cost;
}

ll m,n;

ll par[1100];

ll Find(ll x)
{
    if(par[x]==x)return x;
    else{
        par[x]=Find(par[x]);
        return par[x];
    }
}

void Union(ll x,ll y)
{
    ll px=Find(x);
    ll py=Find(y);
    par[px]=py;
}

void Kruskal()
{
    ll x,y,z;
    for(ll i=0;i<m;i++)
    {
        x=v[i].source;
        y=v[i].des;
        z=v[i].cost;
        if(Find(x)==Find(y))ans.push_back(z);
        else{
            Union(x,y);
        }
    }
}

int main()
{
    ll x,y,z;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)return 0;
        v.clear();
        ans.clear();
        for(ll i=0; i<m; i++)
        {
            cin>>x>>y>>z;
            e.source=x;
            e.des=y;
            e.cost=z;
            v.push_back(e);
        }
        sort(v.begin(),v.end(),cmp);
        for(ll i=0;i<1100;i++)par[i]=i;
        Kruskal();
        ll sz=ans.size();
        if(sz==0)cout<<"forest\n";
        else{
            sort(ans.begin(),ans.end());
            cout<<ans[0];
            for(ll i=1;i<sz;i++)
                cout<<" "<<ans[i];
            cout<<"\n";
        }
    }
}
