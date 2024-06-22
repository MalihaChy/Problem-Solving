#include<bits/stdc++.h>
using namespace std;

int n,m,A;

struct edge
{
    int source;
    int des;
    int cost;
} e;

vector<edge>v;

int par[11000];

bool cmp(edge a, edge b)
{
    return a.cost<b.cost;
}

int Find(int x)
{
    if(par[x]==x)return x;
    else
    {
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
    int x,y,z,ans=0,sz=v.size();
    for(int i=0; i<11000; i++)par[i]=i;
    for(int i=0; i<sz; i++)
    {
        x=v[i].source;
        y=v[i].des;
        z=v[i].cost;
        if(Find(x)!=Find(y))
        {
            ans+=z;
            //cout<<z<<endl;
            Union(x,y);
        }
    }
    //cout<<ans<<endl;
    return ans;
}

int main()
{
    int t,x,y,z;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        cin>>n>>m>>A;
        v.clear();
        for(int i=0; i<m; i++)
        {
            cin>>x>>y>>z;
            if(z<A)
            {
                e.source=x;
                e.des=y;
                e.cost=z;
                v.push_back(e);
            }
        }
        sort(v.begin(),v.end(),cmp);
        //for(int i=0;i<v.size();i++)cout<<v[i].cost<<endl;
        int ans1=Kruskal();
        set<int>s;
        int ans2=0;
        for(int i=1; i<=n; i++)
        {
            if(par[i]==i)ans2++;
            //cout<<"par"<<par[i]<<endl;
        }
        ans1+=(ans2*A);
        printf("Case %d: %d %d\n",tc,ans1,ans2);
    }
}

