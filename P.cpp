#include<bits/stdc++.h>
using namespace std;

struct edge{
    int source;
    int des;
    int cost;
}e;

vector<edge>v;
int ans,c;
int par[500];

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

void Union(int x, int y)
{
    int px=Find(x);
    int py=Find(y);
    par[px]=py;
}

int Kruskal()
{
    int city=0;
    for(int i=0;i<c;i++)
    {
        if(Find(v[i].source)!=Find(v[i].des)){
            ans+=v[i].cost;
            city++;
            Union(v[i].source,v[i].des);
        }
    }
    city++;
    return city;
}

int main()
{
    int s,fare;
    string a,b;
    while(cin>>s>>c)
    {
        v.clear();
        for(int i=0;i<500;i++)par[i]=i;
        if(s==0&&c==0)return 0;
        map<string,int>mp;
        for(int i=1;i<=s;i++){
            cin>>a;
            mp[a]=i;
        }
        for(int i=0;i<c;i++)
        {
            cin>>a>>b>>fare;
            e.source=mp.find(a)->second;
            e.des=mp.find(b)->second;
            e.cost=fare;
            v.push_back(e);
        }
        cin>>a;
        ans=0;
        sort(v.begin(),v.end(),cmp);
        if(s==Kruskal())cout<<ans<<endl;
        else cout<<"Impossible\n";
    }
}
