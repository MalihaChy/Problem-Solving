#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int source;
    int des;
    int cost;
} e;

vector<edge>v;
vector<int>InMST;

bool cmp(edge a, edge b)
{
    return a.cost<b.cost;
}

int par[1000];

int Find(int x)
{
    if(par[x]==x)return x;
    else
    {
        par[x]=Find(par[x]);
        return par[x];
    }
}

void Union(int x,int y)
{
    int px=Find(x);
    int py=Find(y);
    par[px]=py;
}

int Kruskal()
{
    int ans=0;
    int sz=v.size();
    for(int i=0; i<sz; i++)
    {
        if(Find(v[i].source)!=Find(v[i].des))
        {
            ans+=v[i].cost;
            InMST.push_back(i);
            Union(v[i].source,v[i].des);
        }
    }
    return ans;
}

int Kruskal_2(int j,int a)
{
    int ans=0,x,y,z,w=0;
    int sz=v.size();
    for(int i=0; i<sz; i++)
    {
        x=v[i].source;
        y=v[i].des;
        z=v[i].cost;
        if(i!=j)
        {
            if(Find(x)!=Find(y))
            {
                ans+=z;
                w++;
                Union(x,y);
            }
        }
    }
    if(w==a)return ans;
    else return INT_MAX;
}

int main()
{
    int t,n,m,x,y,z;
    cin>>t;
    while(t--)
    {
        v.clear();
        InMST.clear();
        for(int i=0; i<1000; i++)par[i]=i;
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            cin>>x>>y>>z;
            e.source=x;
            e.des=y;
            e.cost=z;
            v.push_back(e);
        }
        sort(v.begin(),v.end(),cmp);
        int s1=Kruskal();
        int sz=n-1;
        vector<int>second_mst;
        for(int i=0; i<sz; i++)
        {
            for(int i=0; i<1000; i++)par[i]=i;
            second_mst.push_back(Kruskal_2(InMST[i],sz));
        }
        sort(second_mst.begin(),second_mst.end());
        cout<<s1<<" "<<second_mst[0]<<endl;
        //for(int i=0;i<second_mst.size();i++)cout<<second_mst[i]<<endl;
    }
}
