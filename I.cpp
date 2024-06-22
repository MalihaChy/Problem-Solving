#include<bits/stdc++.h>
using namespace std;

struct edge{
    int source;
    int des;
    double cost;
}e;

vector<edge>v;
int par[250];

bool cmp(edge a,edge b)
{
    return a.cost<b.cost;
}

int Find(int x)
{
    if(par[x]==x)return x;
    else{
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

void Kruskal()
{
    int sz=v.size();
    double ans;
    for(int i=0;i<sz;i++)
    {
        if(Find(v[i].source)!=Find(v[i].des)){
            ans=v[i].cost;
            Union(v[i].source,v[i].des);
        }
        if(Find(0)==Find(1))break;
    }
    printf("Frog Distance = %.3lf\n\n",ans);
}

int main()
{
    int n,x,y,tc=0;
    double a,b;
    while(cin>>n)
    {
        if(n==0)return 0;
        v.clear();
        for(int i=0;i<250;i++)par[i]=i;
        vector< pair<int,int> >point;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            point.push_back(make_pair(x,y));
        }
        printf("Scenario #%d\n",++tc);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                a=point[i].first-point[j].first;
                b=point[i].second-point[j].second;
                e.source=i;
                e.des=j;
                e.cost=sqrt(a*a+b*b);
                v.push_back(e);
            }
        }
        sort(v.begin(),v.end(),cmp);
        Kruskal();
    }
}
