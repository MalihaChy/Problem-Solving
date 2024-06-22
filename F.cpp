#include<bits/stdc++.h>
using namespace std;

struct edge{
    int u,v,w;
}e;

int n,ans;
vector<edge>vec;
int par[200];

bool cmp(edge a, edge b)
{
    return a.w<b.w;
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

int Kruskal()
{
    int city=0;
    for(int i=0;i<n;i++)
    {
        if(Find(vec[i].u)!=Find(vec[i].v)){
            city++;
            ans+=vec[i].w;
            Union(vec[i].u,vec[i].v);
        }
    }
    city++;
    return city;
}

int main()
{
    int t,cost,serial;
    string a,b;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        serial=1;
        vec.clear();
        for(int i=0;i<200;i++)par[i]=i;
        scanf("%d",&n);
        map<string,int>mp;
        set<string>st;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>cost;
            st.insert(a);
            st.insert(b);
            if(mp.find(a)==mp.end()){
                mp[a]=serial;
                serial++;
            }
            if(mp.find(b)==mp.end()){
                mp[b]=serial;
                serial++;
            }
            e.u=mp.find(a)->second;
            e.v=mp.find(b)->second;
            e.w=cost;
            vec.push_back(e);
        }
        sort(vec.begin(),vec.end(),cmp);
        ans=0;
        if(Kruskal()==st.size())printf("Case %d: %d\n",tc,ans);
        else printf("Case %d: Impossible\n",tc);
    }
}
