#include<bits/stdc++.h>
using namespace std;

int n,m;

struct edge{
    int source;
    int des;
    int cost;
}e;

vector<edge>v;

int par[110];

bool cmp(edge a, edge b)
{
    return a.cost>b.cost;
}

int Find(int x)
{
    if(par[x]==x)return x;
    else{
        par[x]=Find(par[x]);
        return par[x];
    }
}

void Union(int x, int y)
{
    int px=Find(x);
    int py=Find(y);
    par[px]=py;
}

int Kruskal()
{
    int x,y,z,ans;
    for(int i=0;i<110;i++)par[i]=i;
    for(int i=0;i<m;i++)
    {
        x=v[i].source;
        y=v[i].des;
        z=v[i].cost;
        if(Find(x)!=Find(y)){
            ans=z;
            Union(x,y);
        }
    }
    return ans;
}

int main()
{
    int t,x,y,z;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>m;
        v.clear();
        for(int i=0;i<m;i++)
        {
            cin>>x>>y>>z;
            e.source=x;
            e.des=y;
            e.cost=z;
            v.push_back(e);
        }
        sort(v.begin(),v.end(),cmp);
        printf("Case #%d: %d\n",tc,Kruskal());
    }
}
