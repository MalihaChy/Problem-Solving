#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int a,b;
    double c;
} e;

vector<edge>v;
int s;

int par[600];

bool cmp(edge A,edge B)
{
    return A.c<B.c;
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

void Union(int x,int y)
{
    int px=Find(x);
    int py=Find(y);
    par[px]=py;
}

void Kruskal()
{
    vector<double>ans;
    int sz=v.size();
    for(int i=0; i<sz; i++)
    {
        if(Find(v[i].a)!=Find(v[i].b))
        {
            ans.push_back(v[i].c);
            Union(v[i].a,v[i].b);
        }
    }
    reverse(ans.begin(),ans.end());
    printf("%.2lf\n",ans[s-1]);
}

int main()
{
    int t,p;
    double x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&s,&p);
        v.clear();
        vector< pair<double,double> >vp;
        memset(par,0,sizeof(par));
        for(int i=1; i<=p; i++)par[i]=i;
        for(int i=0; i<p; i++)
        {
            scanf("%lf%lf",&x,&y);
            vp.push_back(make_pair(x,y));
        }
        for(int i=0; i<p; i++)
        {
            for(int j=i+1; j<p; j++)
            {
                x=vp[i].first-vp[j].first;
                y=vp[i].second-vp[j].second;
                e.a=i;
                e.b=j;
                e.c=sqrt(x*x+y*y);
                v.push_back(e);
            }
        }

        sort(v.begin(),v.end(),cmp);
        Kruskal();
    }
}
